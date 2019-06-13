#include "libft.h"

char	*ft_strsub(char const *s, unsigned int start, size_t len)
{
	char *freshstr;

	freshstr = ft_strnew(len);
	if (!freshstr || !s || !*(s + start))
		return 0;
	freshstr = (char *)ft_memmove(freshstr, (s + start), len);
	return (freshstr);

}
