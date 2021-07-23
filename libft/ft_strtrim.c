#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*str;
	size_t	s;
	size_t	f;
	size_t	i;

	if (!s1)
		return (0);
	s = 0;
	i = 0;
	f = ft_strlen(s1);
	while ((ft_strchr (set, s1[s])) != 0 && s1[s] != '\0')
		s++;
	while ((ft_strchr (set, s1[f - 1])) != 0 && f > s)
		f--;
	str = (char *)malloc(sizeof(char) * (f - s + 1));
	if (str == NULL)
		return (NULL);
	while (f > s)
	{
		str[i] = s1[s];
		i++;
		s++;
	}
	str[i] = '\0';
	return (str);
}
