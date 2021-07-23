#include "get_next_line.h"

int	search_line(char *str)
{
	int		i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] == '\n')
		{
			i++;
			break ;
		}
		i++;
	}
	return (i);
}

char	*save_stc_buff(char *save)
{
	char	*next_line;
	int		i;
	int		j;

	i = 0;
	j = 0;
	if (!save)
		return (0);
	i = search_line(save);
	if (save[i] == '\0')
	{
		free(save);
		return (NULL);
	}
	next_line = malloc(sizeof(char) * ((ft_strlen(save) - i) + 1));
	if (!next_line)
		return (NULL);
	while (save[i] != '\0')
		next_line[j++] = save[i++];
	next_line[j] = '\0';
	free(save);
	return (next_line);
}

char	*entry_line(char *line)
{
	int		i;
	char	*res;

	i = 0;
	if (!line)
		return (0);
	i = search_line(line);
	res = malloc(sizeof(char) * (i + 1));
	if (!res)
		return (0);
	i = 0;
	while (line[i] != '\0')
	{
		if (line[i] == '\n')
		{
			res[i] = line[i];
			i++;
			break ;
		}
		res[i] = line[i];
		i++;
	}
	res[i] = '\0';
	return (res);
}

char	*get_next_line(int fd)
{
	char			*tmp;
	static char		*stc_buff;
	char			*out;
	static int		rd = 1;

	if (fd < 0 || BUFFER_SIZE <= 0)
		return (NULL);
	tmp = malloc(sizeof (char) * (BUFFER_SIZE + 1));
	if (tmp == NULL)
		return (NULL);
	while (!(ft_strchr(stc_buff, '\n')) && rd > 0)
	{
		rd = read(fd, tmp, BUFFER_SIZE);
		if (rd == -1 || (rd == 0 && stc_buff == NULL))
		{
			free(tmp);
			return (NULL);
		}
		tmp[rd] = '\0';
		stc_buff = ft_strjoin(stc_buff, tmp);
	}
	free (tmp);
	out = entry_line(stc_buff);
	stc_buff = save_stc_buff(stc_buff);
	return (out);
}
