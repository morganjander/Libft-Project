#include "libft.h"

char * ft_strmap(char const *s, char (*f)(char))
{
	if(!s)
		return (NULL);
	char *freshstr;
	freshstr = ft_strnew(ft_strlen(s));
	if (!freshstr)
		return (NULL);
	int i;
	i = 0;
	while (*(s + i))
	{
		*(freshstr + i+) = f(s + i);
		++i:
	}
	return (freshstr);
}
