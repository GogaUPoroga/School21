#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t		ih;
	size_t		in;

	ih = 0;
	if (*needle == '\0')
		return ((char *)haystack);
	while (haystack[ih] != '\0' && ih < len)
	{
		in = 0;
		while (haystack[ih + in] == needle[in] && ih + in < len)
		{
			if (needle[in + 1] == '\0')
				return ((char *)haystack + ih);
			in++;
		}
		ih++;
	}
	return (NULL);
}
