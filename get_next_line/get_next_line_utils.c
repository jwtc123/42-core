/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_utils.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tiwong <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/12 20:50:38 by tiwong            #+#    #+#             */
/*   Updated: 2023/10/15 16:45:27 by tiwong           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

void	ft_bzero(void *s, size_t n)
{
	int				i;
	unsigned char	*p;

	i = 0;
	p = (unsigned char *)s;
	while (n > 0)
	{
		p[i] = '\0';
		i++;
		n--;
	}
}

int	gnl_len(char *s, int BUFFER_SIZE, int fd, char *buffer)
{
	static int	i;
	ssize_t	pp_read;

	i = 0;
	pp_read = read(fd, buffer, BUFFER_SIZE);
	while (s[i] != '\n' && pp_read > 0)
	{
		if (i == pp_read - 1)
			pp_read = read(fd, buffer, BUFFER_SIZE);
		i++;
	}		
	return (i);
}

int	find_newline()