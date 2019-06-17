/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mjander <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/06 12:44:41 by mjander           #+#    #+#             */
/*   Updated: 2019/06/14 13:07:51 by mjander          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memccpy(void *dst, const void *src, int c, size_t n)
{
	size_t i;
	char * dst1;
	char const *src1;
	unsigned char stop;

	i = -1;
	dst1 = (char *)dst;
	src1 = (char const *)src;
	stop = (unsigned char)c;
	while (++i < n && dst && src && stop)
	{
		if (src1[i] == stop)
		{
			dst1[i] = src1[i];
			return (dst + (i + 1));
		}
		else
			dst1[i] = src1[i];
	}
	return (NULL);
}
