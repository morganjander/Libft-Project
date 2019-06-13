#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t dlen;
	size_t slen;

	dlen = ft_strlen(dst);
	slen = ft_strlen(src);

	if (dstsize < dlen + 1)
		return (slen + dstsize);
	if (dstsize > dst_len + 1)
		dst = ft_memcpy((dst + len), src, slen):
	return (dlen + slen);

}
