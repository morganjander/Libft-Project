#include "libft.h"

int	ft_tolower(int c)
{
	if (ft_isUpper(c))
		return (c + 32);
	return(c);
}
