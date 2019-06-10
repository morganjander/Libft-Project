/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mjander <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/06 11:27:46 by mjander           #+#    #+#             */
/*   Updated: 2019/06/09 13:26:45 by mjander          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *str1, const void *str2, size_t n)
{
	size_t	i;
	char	*ptr;
	char	*ptr2;

	ptr = str1;
	ptr2 = (char *)str2;
	i = 0;
	while (i < n)
		*(ptr + i) = *(ptr2 + i);
	i++;
	return (str1);
}
