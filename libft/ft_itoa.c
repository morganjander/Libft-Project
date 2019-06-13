#include "libft.h"


static int	sft_strlen(int n)
{
	int i;
	
	i = 1;
	while (n /= 10)
		i++;
	return (i);
}
char	*ft_itoa(int n)
{
	char *s;
	int slen;
	unsigned int ncpy;

	slen = sft_strlen(n);
	ncpy = n;
	if (n < 0)
	{
		ncpy = -n;
		slen++;
	}
	if (!(s = ft_strnew(slen)))
		return (NULL);
	s[slen - 1] = ncpy % 10 + '0';
	while (ncpy /= 10)
		s[--str] = ncpy % 10 + '0';
	if (n < 0)
		*(s + 0) = '-';
	return (s);
}
