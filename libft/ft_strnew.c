#include "libft.h"

char	*ft_strnew(size_t size)
{
	char *new;

	new = NULL;
	new = (char *)ft_memalloc(size);
	if (!new)
		return (NULL);
	return (new);
}
