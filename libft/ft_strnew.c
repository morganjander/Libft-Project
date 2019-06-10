#include "libft.h"
/*
char *ft_strnew(size_t size)
{
	char *ptr;
        ptr = (char *) malloc(sizeof(char) * size + 1);
	if (!ptr)
		return (NULL);
	ft_bzero(ptr, size + 1);
	return (ptr);
}
*/
char	*ft_strnew(size_t size)
{
	char	*f;
	int		j;
	int		l;

	l = size + 1;
	j = 0;
	f = (char *)malloc(l);
	if (f == 0)
		return (NULL);
	while (l > 0)
	{
		f[j] = '\0';
		l--;
		j++;
	}
	return (f);
}
