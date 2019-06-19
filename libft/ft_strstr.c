/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mjander <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/14 12:26:41 by mjander           #+#    #+#             */
/*   Updated: 2019/06/19 12:40:08 by mjander          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <string.h>
#include <stdio.h>

char	*ft_strstr(const char *haystack, const char *needle)
{
	size_t	i;
	size_t	p;
	
	if (!*needle)
		return ((char *)haystack);
	i = 0;
	p = 0;
	while (haystack[i] != '\0')
	{
		if (haystack[i] == needle[p])
		{
			while (needle[p] == haystack[i] && needle[p] != '\0')
			{
				i++;
				p++;
				if (p  == ft_strlen(needle))
					return ((char *)&haystack[i - p]);
			}
			i = i - p;
			p = 0;
		}
		i++;
	}
	return (NULL);
}