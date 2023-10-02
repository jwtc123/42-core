/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tiwong <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/30 14:21:21 by tiwong            #+#    #+#             */
/*   Updated: 2023/10/03 00:00:09 by tiwong           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_printformat(char fs, va_list fptr)
{
	if (fs == 'c')
		return (ft_printchar(va_arg(fptr, int)));
	if (fs == 's')
		return (ft_printstr(va_arg(fptr, char *)));
	if (fs == 'p')
		return (ft_printhex(va_arg(fptr, unsigned long),
				"0123456789abcdef", fs));
	if (fs == 'd' || fs == 'i')
		return (ft_printnbr(va_arg(fptr, int)));
	if (fs == 'u')
		return (ft_printunbr(va_arg(fptr, unsigned int)));
	if (fs == 'x')
		return (ft_printhex(va_arg(fptr, unsigned int),
				"0123456789abcdef", fs));
	if (fs == 'X')
		return (ft_printhex(va_arg(fptr, unsigned int),
				"0123456789ABCDEF", fs));
	if (fs == '%')
		return (ft_printchar('%'));
	return (0);
}

int	ft_printf(const char *s, ...)
{
	va_list	ptr;
	int		count;
	int		i;

	i = 0;
	count = 0;
	va_start(ptr, s);
	while (s[i] != '\0')
	{
		if (s[i] == '%')
		{
			count += ft_printformat(s[++i], ptr);
			i++;
		}
		else
		{
			count += ft_printchar(s[i]);
			i++;
		}
	}
	va_end(ptr);
	return (count);
}
/*
#include <stdio.h>
int	main()
{
	char	*c;

//	printf("\n%d", printf("%p", 4294967296));
	ft_printf("%p\n", c);
	printf("%p\n", c);
}*/
