#include "libft.h"

char	*ft_strncat(char *s1, const char *s2, size_t n)
{
	size_t start;
	
	start = ft_strlen(s1) - 1;
	s1 = (char *)ft_memcpy((s1 + start), s2, n);
	s1[start + n] = '\0';
}
