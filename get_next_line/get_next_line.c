/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tiwong <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/07 16:41:55 by tiwong            #+#    #+#             */
/*   Updated: 2023/10/11 09:18:27 by tiwong           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

char	*get_next_line(int fd)
{
	char	buffer[BUFFER_SIZE];
	ssize_t	p_read;
	static int	i;
	int	count;
	char	str[BUFFER_SIZE];
	
	buffer = (char *)malloc((buffer + 1) * sizeof (char)); 
	p_read = read(fd, buffer, sizeof (buffer));
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
	while (*get_next_line > 0)

