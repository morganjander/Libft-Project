/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mjander <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/14 12:24:58 by mjander           #+#    #+#             */
/*   Updated: 2019/06/14 13:03:59 by mjander          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strcat(char *s1, const char *s2)
{
	size_t start;
	size_t len;

	start = ft_strlen(s1) - 1;
	len = ft_strlen(s2);
	s1 = (char *)ft_memcpy((s1 + start), s2, len);
	s1[start + len] = '\0';
	return (s1);
}
