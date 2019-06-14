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

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	size_t i;

	i = 0;
	if (dst < src)
		return (ft_memcpy(dst, src, len));
	else
		i = len - 1;
	while (i >= 0)
	{
		((char *)dst)[i] = ((char *)src)[i];
		i--;
	}
	return (dst);
}
