#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t i;
	size_t j;
	size_t found;

	i = ft_strlen(needle) - 1;
	j = i;
	found = 0;
	while (i < ft_strlen(haystack) && i < len)
	{
		if (haystack[i] == needle[j])
		{
			found = 0;
			while (haystack[i] == needle[j] && i >= 0)
				found++;
				i--;
				j--;
			if (found == ft_strlen(needle))
				return ((char *)haystack + i);
			else
				i = i + found;
				j = ft_strlen(needle) - 1;
		}
		i++;
	}
	return (NULL);
	
}
