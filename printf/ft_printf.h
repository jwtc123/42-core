/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tiwong <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/01 15:07:47 by tiwong            #+#    #+#             */
/*   Updated: 2023/10/02 23:37:36 by tiwong           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H
# include <stdlib.h>
# include <unistd.h>
# include <stdarg.h>

int	ft_printchar(char c);
int	ft_printstr(char *s);
int	ft_printnbr(int c);
int	ft_printunbr(unsigned long c);
int	ft_printhex(unsigned long c, char *base, char fs);
int	ft_printformat(char fs, va_list fptr);
int	ft_printf(const char *s, ...);

#endif
