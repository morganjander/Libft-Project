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
	size_t i;

	if (!s1 || !s2)
		return (NULL);

	start = ft_strlen(s1);
	i = 0;
	while (s2[i] != '\0')
	{
		s1[start++] = s2[i++];
	}
	s1[start + i] = '\0';
	return (s1);
}
