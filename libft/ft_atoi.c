#include "libft.h"

int ft_atoi(const char *str)
{
	int i = 0;
	int n = 0;
	int pos = 1;



	while (*(str + i) == '\n' ||
	       *(str + i) == '\r' ||
	       *(str + i) == '\t' ||
	       *(str + i) == '\v' ||
	       *(str + i) == '\f' ||
	       *(str + i) == ' ' ||)
		i++;

	if (*(str + i) == '-')
		pos = -1;

	


