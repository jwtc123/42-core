/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tiwong <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/07 16:41:55 by tiwong            #+#    #+#             */
/*   Updated: 2023/10/19 20:09:43 by tiwong           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

char	*get_next_line(int fd)
{
	char	buffer[BUFFER_SIZE + 1];
	ssize_t	p_read;
	static int	i;
	int	j;
	char	*str;
	
//	buffer = (char *)malloc(BUFFER_SIZE);
	p_read = read(fd, buffer, BUFFER_SIZE);
	if (p_read <= 0)
	{
//		free(buffer);
		return (NULL);
	}
	while (p_read = read(fd, buffer, BUFFER_SIZE) > 0)

	str = (char *)malloc(BUFFER_SIZE + 2);
	if (!str)
	{
//		free(buffer);
		free(str);
		return (NULL);
	}
	str = NULL;
	if (buffer[0] == '\n')
	{
		str[0] = '\n';
//		free(buffer);
		return (str);
	}
	i = 0;
	j = 0;
	while (buffer[i] != '\n' && p_read > 0)
	{
		str[i++] = buffer[j++];
		if (j == p_read))
		{
			p_read = read(fd, buffer, BUFFER_SIZE);
			j = i - BUFFER_SIZE;
			str[i++] = buffer[j++];
		}
	}
	str[i + 1] = '\n';
	str[i + 2] = '\0';
//	free(buffer);
	return (str);			
}

#include <stdio.h>
int	main(void)
{
	int	fd;
	char	*line;

	fd = open("test.txt", O_RDONLY);
	if (fd == -1)
		return (-1);
	while ((line = get_next_line(fd)) != NULL)
	{
		printf("%s", line);
		free(line);
	}
	close(fd);
	return (0);
}
