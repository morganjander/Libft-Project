#include "libft.h"

char	*ft_strcpy(char *dst, const char *src)
{
	size_t len

	len = ft_strlen(dst);
	dst = ((char *)ft_memcpy(dst, src, len));
	dst[len + 1] = '\0';
	return (dst);
}
