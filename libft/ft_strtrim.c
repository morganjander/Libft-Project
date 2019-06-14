/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mjander <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/14 12:38:18 by mjander           #+#    #+#             */
/*   Updated: 2019/06/14 13:16:18 by mjander          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s)
{
	char *freshstr;
	size_t i;
	size_t j;
	size_t len;

	i = 0;
	j = 0;
	len = 0;
	while (ft_iswhitespace(s[i]))
		i++;
	while (!(ft_iswhitespace(s[i])))
	{
		j++;
		i++;
	}
	len = ft_strlen(s);
	freshstr = ft_strnew(len);
	if (!freshstr)
		return (0);
	freshstr = (char *)ft_memcpy(freshstr, (s + (i - j)), j);
	return (freshstr);
}
