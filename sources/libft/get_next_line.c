/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agauci-d <agauci-d@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/19 11:25:38 by agauci-d          #+#    #+#             */
/*   Updated: 2015/01/03 21:49:52 by agauci-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"
#include <stdlib.h>

void			ft_fillup(char ***s, char ***tmp, int i)
{
	char *str;

	if (ft_strlen(**tmp) > 0)
	{
		str = ft_strdup(**tmp);
		**tmp = ft_strsub(str, (i + 1), ft_strlen(**s));
		free(str);
	}
	else
	{
		str = ft_strdup(**s);
		**tmp = ft_strsub(str, (i + 1), BUF_SIZE);
		free(str);
	}
}

static int		ft_analyse(char **s, char **line, char **tmp, int ret)
{
	int		i;

	i = 0;
	while ((*s)[i] != '\n' && (*s)[i] != '\0')
		i++;
	if ((*s)[i] == '\n')
	{
		*line = ft_strsub(*s, 0, i);
		ft_fillup(&s, &tmp, i);
		return (1);
	}
	else if ((*s)[i] == '\0' && ret == BUF_SIZE)
	{
		if (ft_strlen(*tmp) == 0)
			*tmp = ft_strdup(*s);
		return (2);
	}
	else if ((*s)[i] == '\0' && ret < BUF_SIZE)
	{
		*line = ft_strsub(*s, 0, i);
		return (1);
	}
	return (-1);
}

static int		ft_distribution(char **tmp, char **buf, char **line, int ret)
{
	char	*str;
	int		end;

	end = 2;
	if (ft_strlen(*tmp) > 0)
	{
		str = ft_strdup(*tmp);
		*tmp = ft_strjoin(str, *buf);
		free(str);
		end = ft_analyse(&*tmp, line, &*tmp, ret);
	}
	else
		end = ft_analyse(&*buf, line, &*tmp, ret);
	if (end == 0)
		free(*tmp);
	return (end);
}

static int		ft_tmpalone(char **tmp, char **line)
{
	int		i;
	char	*str;

	i = 0;
	while ((*tmp)[i] != '\n' && (*tmp)[i] != '\0')
		i++;
	if ((*tmp)[i] == '\n')
	{
		*line = ft_strsub(*tmp, 0, i);
		str = ft_strdup(*tmp);
		*tmp = ft_strsub(str, (i + 1), ft_strlen(str));
		free(str);
		return (1);
	}
	else if ((*tmp)[i] == '\0')
	{
		*line = ft_strsub(*tmp, 0, i);
		if (ft_strlen(*tmp) > 0)
			ft_strclr(*tmp);
		return (1);
	}
	return (-1);
}

int				get_next_line(const int fd, char **line)
{
	char			buf[BUF_SIZE + 1];
	static char		*tmp;
	char			*str;
	int				end;
	int				ret;

	ft_strclr(*line);
	while ((ret = read(fd, buf, BUF_SIZE)))
	{
		if (ret == -1)
			return (-1);
		buf[ret] = '\0';
		str = ft_strdup(buf);
		end = ft_distribution(&tmp, &str, line, ret);
		free(str);
		if (end == 0 || end == 1 || end == -1)
			return (end);
	}
	end = ((ret == 0 && ft_strlen(tmp) == 0) ? 0 : -1);
	while (ret == 0 && end != 0)
	{
		if ((end = ft_tmpalone(&tmp, line)) == 1)
			return (1);
	}
	return (end);
}
