#include "libft.h"

char	*ft_strmap(char const *s, char (*f)(char))
{
	char	*freshstr;
	int		i;

	i = 0;
	if ( !s || !f )
		return (NULL);
	freshstr = ft_strnew(ft_strlen(s) + 1);
	if (!freshstr)
		return (NULL);
	while (s[i] != '\0')
	{
		freshstr[i] = (*f)(s[i]);
		i++;
	}
	return (freshstr);
}
