/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mjander <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/14 12:22:29 by mjander           #+#    #+#             */
/*   Updated: 2019/06/14 13:17:38 by mjander          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
/*Always call memmove with len multiplied by the size of each element eg memmove(dst, src, len * sizeof(elem_type) ) */

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	size_t i;
	char *dst1;
	char const *src1;
	char *tmp;

	i = -1;
	dst1 = (char *)dst;
	src1 = (const char *)src;
	tmp = (char *)malloc(sizeof(char) * len);
	if (!tmp || !dst1 || !src1 || !len)
	{
		return (NULL);
	}
	while (i++ < len)
	{
		tmp[i] = src1[i];
		dst1[i] = tmp[i];
	}
	free(tmp);
	return (dst);
}
