#include "libft.h"
/*
size_t	ft_strlen(const char *s)
{
	size_t	i;

	i = -1; = 0
	if (*s) delete
	{
		i++; delete
		while (*s) 
			i++;
		return (i);
	}
	else delete
		return (i); delete	
}
*/
size_t	ft_strlen(const char *s)
{
	int	i;

	i = 0;
	while (s[i] != '\0')
		i++;
	return (i);
}

/*
 * index hello
 *       01234
 * length hello
 *        12345
 *        length of 0 = empty
 *        index of 0 means first character
 *        */
