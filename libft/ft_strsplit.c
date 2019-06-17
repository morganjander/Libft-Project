/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mjander <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/14 12:38:41 by mjander           #+#    #+#             */
/*   Updated: 2019/06/14 13:05:45 by mjander          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	sft_wordlen(char const *s, char c)
{
	int i;
	int len;

	i = 0;
	len = 0;
	while (s[i] == c)
		i++;
	while (s[i] != c && s[i] != '\0')
	{
		i++;
		len++;
	}
	return (len);
}

static int	sft_wordnum(char const *s, char c)
{
	int i;
	int count;

	i = 0;
	count = 0;
	while (s[i])
	{
		while (s[i] == c)
			i++;
		if (s[i] != c && s[i] != '\0')
			count++;
		while (s[i] != c && s[i] != '\0')
			i++;
	}
	return (count);
}

char	**ft_strsplit(char const *s, char c)
{
	char **wordlist;
	int i;
	int j;
	int k;

	i = 0;
	j = 0;
	k = 0;
	wordlist = (char **)malloc(sizeof(wordlist) * (sft_wordnum(s, c) + 1));
	if (!s || !wordlist)
		return (NULL);
	while (i < sft_wordnum(s, c))
	{
		k = 0;
		wordlist[i] = ft_strnew(sft_wordlen(&s[j], c) + 1);
		if (!(wordlist[i] = ft_strnew(sft_wordnum(&s[j], c) + 1)))
			wordlist[i] = NULL;
		while (s[j] == c)
			j++;
		while (s[j] != c && s[j] != '\0' && wordlist[i])
			wordlist[i][k++] = s[j++];
		wordlist[i][k] = '\0';
		i++;
	}
	wordlist[i] = 0;
	return (wordlist);
}
