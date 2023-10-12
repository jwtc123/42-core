/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tiwong <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/07 16:41:55 by tiwong            #+#    #+#             */
/*   Updated: 2023/10/12 21:37:23 by tiwong           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

char	*get_next_line(int fd)
{
	char	*buffer;
	ssize_t	p_read;
	static int	i;
	int	count;
	char	*str;
	
	buffer = (char *)malloc(BUFFER_SIZE);
	str = (char *)malloc(BUFFER_SIZE + 1);	
	p_read = read(fd, buffer, BUFFER_SIZE);
	if (p_read == -1)
		return (NULL);
	i = 0;
	count = 0;
	if (buffer[i++] == '\n')
	{
		str[count++] = '\n';
		return ("\n");
	}
	while (buffer[i] != '\n')
		str[count++] = buffer[i++];
	str[count] = '\n';
	str[count + 1] = '\0';
	return (str);			
}

#include <stdio.h>
int	main(void)
{
	int	file_desc;
	char	*get_next_line;

	file_desc = open("test.txt", O_RDONLY);
	if (file_desc == -1)
		return (-1);
	*get_next_line(file_desc);
}
