/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mjander <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/03 09:12:34 by mjander           #+#    #+#             */
/*   Updated: 2019/06/19 12:29:41 by mjander          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <string.h>
#include <stdio.h>
#include <stdlib.h>

int	ft_atoi(const char *str)
{
	int	i;
	int	sign;
	unsigned int	res;

	i = 0;
	sign = 1;
	res = 0;
	while (ft_iswhitespace(str[i]) == 1)
		i++;
	if (str[i] == '-' || str[i] == '+')
	{
		sign = (str[i] == '-') ? -1 : 1;
		i++;
	}
	while (ft_isdigit(str[i]))
	{
		if (res > INT_MAX / 10 || (res == INT_MAX / 10 && str[i] > '7'))
		{
			if (sign == 1)
				return ((unsigned int)INT_MAX);
			else
				return  ((unsigned int)INT_MIN);
		}
		res = (res * 10) + (str[i] - '0');
		i++;
	}
	return (res * sign);
}

int	main(void)
{
	printf("%d\n", atoi("-2147483649"));
	printf("%d\n", ft_atoi("-2147483649"));			
}
