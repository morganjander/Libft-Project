/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mjander <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/14 12:23:40 by mjander           #+#    #+#             */
/*   Updated: 2019/06/14 13:20:04 by mjander          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s1)
{
	size_t len;
	char *dup;

	len = ft_strlen(s1);
	dup = ft_strnew(len + 1);
	if (!dup)
		return (NULL);
	dup = (char *)ft_memcpy(dup, s1, len);
	dup[len] = '\0';
	return (dup);
}
