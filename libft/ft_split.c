#include "libft.h"

static int	ft_size(char const *str, char c)
{
	unsigned int	i;
	int				n;

	i = 0;
	n = 0;
	while (str[i] != '\0')
	{
		while (str[i] == c)
			i++;
		if (str[i] != '\0')
			n++;
		while (str[i] != '\0' && str[i] != c)
			i++;
	}
	return (n);
}

static int	ft_len(const char *s, char c)
{
	int		len;

	len = 0;
	while (*s != c && *s != '\0')
	{
		len++;
		s++;
	}
	return (len);
}

char	**ft_split(char const *s, char c)
{
	char	**t;
	int		n;
	int		i;

	if (s == NULL)
		return (NULL);
	i = 0;
	n = ft_size(s, c);
	t = (char **)malloc(sizeof(*t) * (n + 1));
	if (t == NULL)
		return (NULL);
	while (n--)
	{
		while (*s == c && *s != '\0')
			s++;
		t[i] = ft_substr(s, 0, ft_len(s, c));
		if (t[i] == NULL)
			return (NULL);
		s = s + ft_len(s, c);
		i++;
	}
	t[i] = NULL;
	return (t);
}
