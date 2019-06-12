/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mjander <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/06 12:44:41 by mjander           #+#    #+#             */
/*   Updated: 2019/06/09 13:37:22 by mjander          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

void *ft_memccpy(void *dst, const void *src, int c, size_t n)
{
	size_t i;

	i = 0;
		while (i < n)
		{	if (((char *)dst)[i] == c)
			{
				((char *)dst)[i] = ((char *)src)[i];
				return (dst);
			}
		else
			((char *)dst)[i] = ((char *)src)[i];
			i++;
		}

	return (dst);

}
