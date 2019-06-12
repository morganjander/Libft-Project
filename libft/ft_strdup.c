#include "libft.h"

char	*ft_strdup(const char *s1)
{
	size_t i;
	size_t len;
	char *dup;

	i = 0;
	len = ft_strlen(s1);
	dup = ft_strnew(len);
	if (!dup)
		return NULL;
	dup = (char *)ft_memcpy(dup, s1, len);
	return (dup);
}
