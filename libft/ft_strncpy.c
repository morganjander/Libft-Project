/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mjander <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/14 12:24:39 by mjander           #+#    #+#             */
/*   Updated: 2019/06/14 12:24:45 by mjander          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strncpy(char *dst, const char *src, size_t len)
{
	if (!dst || !src)
		return (NULL);
	dst = (char *)ft_memcpy(dst, src, len);
	if ((ft_strlen(src) + 1) < len)
	{
		while (len > (ft_strlen(src) + 1))
		{
			dst[len] = '\0';
			len--;
		}
	}
	return (dst);
}
