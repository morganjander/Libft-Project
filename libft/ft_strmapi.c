#include "libft.h"

char * ft_strmapi(char const *s, char (*f)(unsigned int, char))
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
		*(freshstr + i+) = f(i,(s + i));
		++i:
	}
	return (freshstr);
}
