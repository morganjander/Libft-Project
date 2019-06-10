#include "libft.h"

char	*ft_strmap(char const *s, char (*f)(char))
{
	char	*freshstr;
	int		i;

	if (s == NULL || f == NULL)
		return (NULL);
	freshstr = ft_strnew(ft_strlen(s));
	if (freshstr == NULL)
		return (NULL);
	i = 0;
	while (s[i] != '\0')
	{
		freshstr[i] = (*f)(s[i]);
		i++;
	}
	return (freshstr);
}
