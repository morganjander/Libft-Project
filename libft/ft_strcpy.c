/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mjander <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/14 12:24:22 by mjander           #+#    #+#             */
/*   Updated: 2019/06/14 12:24:32 by mjander          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strcpy(char *dst, const char *src)
{
	size_t len;
	if (!dst || !src)
		return (NULL);
	len = ft_strlen(src);
	dst = ((char *)ft_memcpy(dst, src, (len + 1)));
	return (dst);
}
