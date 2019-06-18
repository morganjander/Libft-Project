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
	unsigned char * dst1;
	unsigned char const *src1;
	
	dst1 = (unsigned char *)dst;
	src1 = (unsigned char const *)src;
	if (dst == src)
		return (NULL);
	while (n > 0)
	{
		if ((*dst1++ = *src1++) == (unsigned char)c)
			return (dst);
			n--;
	}
	return (NULL);
}
