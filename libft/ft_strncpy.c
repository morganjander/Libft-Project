#include "libft.h"

char	*ft_strncpy(char *dst, const char *src, size_t len)
{
	dst = (char *)ft_memcpy(dst, src, len);
	if (dst[len] != '\0')
		dst[len + 1] = '\0';
	return (dst);
}
