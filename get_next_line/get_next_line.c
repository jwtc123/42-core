/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tiwong <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/07 16:41:55 by tiwong            #+#    #+#             */
/*   Updated: 2023/10/08 00:05:04 by tiwong           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

char	*get_next_line(int fd)
{
	char	*buffer;
	ssize_t	p_read;
	char	*temp;

		
	buffer = (char *)malloc(ft_strlen(temp) * sizeof (char)); 
	p_read = read(fd, buffer, sizeof (buffer));

