#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char	*freshstr;
	int		i;

	i = 0;
	if (!s)
		return (NULL);
	freshstr = ft_strnew(ft_strlen(s));
	if (!freshstr)
		return (NULL);
	while (*(s + i))
	{
		freshstr[i] = (*f)(i, s[i]);
		i++;
	}
	return (freshstr);
}
