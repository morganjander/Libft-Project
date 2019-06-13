#include "libft.h"

char	*ft_strstr(const char *haystack, const char *needle)
{
	int i;
	int j;
	int found;

	i = ft_strlen(needle) - 1;
	j = i;
	found = 0;
	while (i < ft_strlen(haystack))
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
