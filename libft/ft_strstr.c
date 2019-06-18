/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mjander <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/14 12:26:41 by mjander           #+#    #+#             */
/*   Updated: 2019/06/14 15:42:15 by mjander          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strstr(const char *haystack, const char *needle)
{
	size_t i;
	size_t j;
	size_t k;
	
	if (!*needle)
		return ((char *)haystack);
	j = ft_strlen(needle);
	i = j;
	k = 0;
	while (haystack[i] != '\0')
	{
		if (haystack[i] == needle[j])
		{
			k = 1;
			while (needle[j] && haystack[i] == needle[j])
				j--;
				i--;
				k++;
			if (k == ft_strlen(needle))
				return ((char *)&haystack[i]);
		}
		i++;
	}
	return (NULL);
}
