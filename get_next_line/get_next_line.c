/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tiwong <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/21 17:18:05 by tiwong            #+#    #+#             */
/*   Updated: 2023/10/21 17:24:15 by tiwong           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

//Function B
//	Concat function and re-malloc to whole storage of buffer iterations
char	*gnl_strcat(char *dest, char *src, int i)
{
	
}
//Function A
//	Remember the last buffer, calculate length until \n, then
//	add 1 as pointer to start of buffer to be added for whats left of buffer.
//	Call function B and buffer force 
//
//GNL
//	Read into buffer limited by BUFFER_SIZE in while loop until \n detected.
//	Return after that, then call Function A
char	*get_next_line(int fd)
{
	char	*buffer = NULL;
	int 	i;
	static char	*storebuffer;

	i = 0;
	while (1)
	{
		while (storebuffer[i] != '\n')
		{	
			buffer = (char *)malloc(sizeof (char) * BUFFER_SIZE);
			bytes_read = read(fd, buffer, BUFFER_SIZE);
			if (find_newline == 1)
				call Function A;
				return (storebuffer);
			else if (buffer[i] == '\0')
				call Function B pass i as parameter;
				return (storebuffer);
			else
				call Function B;
		}
		i++;
	}
}
//
//Main
//	Call GNL in while loop till EOF, prints each line ending with \n.
