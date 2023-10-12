/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tiwong <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/12 18:58:08 by tiwong            #+#    #+#             */
/*   Updated: 2023/10/12 22:15:06 by tiwong           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef
# define BUFFER_SIZE=42
#endif
#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H
# include <unistd.h>
# include <stdlib.h>
# include <stddef.h>

char	*get_next_line(int fd);

#endif