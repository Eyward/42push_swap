/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_bonus.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zzirh <zzirh@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/29 23:50:41 by zzirh             #+#    #+#             */
/*   Updated: 2022/06/18 04:36:37 by zzirh            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../bonus.h"
#include <fcntl.h> 
#include <stdio.h>

char	*readl(int fd, char *stmp, int bufsize)
{
	ssize_t	nb;
	char	*buff;

	buff = (char *)malloc(sizeof(char) * (bufsize + 1));
	if (!buff)
		return (NULL);
	nb = 1;
	while (!ft_strchr(stmp, '\n') && nb != 0)
	{
		nb = read(fd, buff, bufsize);
		if (nb == -1)
		{
			free(buff);
			return (NULL);
		}
		buff[nb] = '\0';
		stmp = ft_strjoin(stmp, buff);
	}
	free(buff);
	return (stmp);
}

char	*ft_line(char *stmp)
{
	int		i;
	char	*line;

	i = 0;
	if (!stmp[i])
		return (NULL);
	while (stmp[i] && stmp[i] != '\n')
		i++;
	line = (char *)malloc(sizeof(char) * (i + 2));
	if (!line)
		return (NULL);
	i = 0;
	while (stmp[i] && stmp[i] != '\n')
	{
		line[i] = stmp[i];
		i++;
	}
	if (stmp[i] == '\n')
		line[i++] = '\n';
	line[i] = '\0';
	return (line);
}

char	*ft_rest(char *stmp)
{
	char	*newst;
	int		i;
	int		j;

	i = 0;
	while (stmp[i] && stmp[i] != '\n')
		i++;
	if (!stmp[i])
	{
		free(stmp);
		return (NULL);
	}
	i++;
	newst = (char *)malloc(sizeof(char) * ft_strlen(stmp) - i + 1);
	if (!newst)
		return (NULL);
	j = 0;
	while (stmp[i])
	{
		newst[j++] = stmp[i++];
	}
	newst[j] = '\0';
	free(stmp);
	return (newst);
}

char	*get_next_line(int fd)
{
	char		*line;
	static char	*stmp;
	int			bufsize;

	bufsize = 2;
	if (fd == -1 || bufsize <= 0)
		return (NULL);
	stmp = readl(fd, stmp, bufsize);
	if (!stmp)
		return (NULL);
	line = ft_line(stmp);
	stmp = ft_rest(stmp);
	return (line);
}
