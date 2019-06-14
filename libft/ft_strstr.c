/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mjander <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/14 12:26:41 by mjander           #+#    #+#             */
/*   Updated: 2019/06/14 12:53:07 by mjander          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strstr(const char *haystack, const char *needle)
{
	size_t i;
	size_t j;
	size_t found;

	i = ft_strlen(needle) - 1;
	j = i;
	found = 0;
	while (i < ft_strlen(haystack))
	{
		if (haystack[i] == needle[j])
		{
			found = 0;
			while (haystack[i] == needle[j])
            {
				found++;
				i--;
				j--;
            }
			if (found == ft_strlen(needle))
				return ((char *)haystack + i);
			else
            {
                i = i + found;
				j = ft_strlen(needle) - 1;
            }
		}
		i++;
	}
	return (NULL);
}
