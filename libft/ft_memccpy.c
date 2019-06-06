/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mjander <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/06 12:44:41 by mjander           #+#    #+#             */
/*   Updated: 2019/06/06 12:52:19 by mjander          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

void *ft_memcpy(void *str1, const void *str2, int c, size_t n)
{
	size_t i;
	char *ptr;
	char *ptr2;

	ptr = str1;
	ptr2 = (char *)str2;;
	i = 0;
		while(i < n)
		{	if(*(ptr + i) == c)
			{
				*(ptr + i) = *(ptr2 + i);
				return (str1);
			}
		else
			*(ptr + i) = *(ptr2 + i);
			i++;
		}

	return (NULL);

}
