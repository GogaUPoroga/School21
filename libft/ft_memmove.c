#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	unsigned char	*tmp_dst;
	unsigned char	*tmp_src;
	size_t			i;

	tmp_dst = (unsigned char *)dst;
	tmp_src = (unsigned char *)src;
	i = 0;
	if (src == NULL && dst == NULL)
		return (dst);
	if (dst < src)
	{
		while (len--)
			*tmp_dst++ = *tmp_src++;
	}
	else
	{
		while (len--)
			*(tmp_dst + len) = *(tmp_src + len);
	}
	return (dst);
}
