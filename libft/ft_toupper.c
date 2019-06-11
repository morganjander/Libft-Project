#include "libft.h"

int	ft_toupper(int c)
{
	if (islower(c))
		return (c - 32);
	return(c);
}
