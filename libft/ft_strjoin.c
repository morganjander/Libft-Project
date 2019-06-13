#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char *freshstr;
	size_t len1;
	size_t len2;

	len1 = ft_strlen(s1);
	len2 = ft_strlen(s2);
	freshstr = ft_strnew(len1 + len2 + 1);
	if (!freshstr)
		return 0;
	freshstr = (char *)ft_memcpy(freshstr, s1, len1);
	//(freshstr + len1) = (char *)ft_memcpy((freshstr + len1), s2, len2);
	freshstr[len1 + len2] = '\0';
	return (freshstr);

}
