/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printhelper.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tiwong <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/30 14:47:23 by tiwong            #+#    #+#             */
/*   Updated: 2023/10/03 00:01:03 by tiwong           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_printchar(char c)
{
	write(1, &c, 1);
	return (1);
}

int	ft_printstr(char *s)
{
	int	count;

	count = 0;
	if (!s)
		s = "(null)";
	while (s[count])
	{
		write(1, &s[count], 1);
		count++;
	}
	return (count);
}

int	ft_printnbr(int c)
{
	long int	nbr;
	int			count;

	count = 0;
	nbr = c;
	if (nbr < 0)
	{
		write(1, "-", 1);
		nbr = -nbr;
		count++;
	}
	if (nbr >= 10)
		count += ft_printnbr(nbr / 10);
	nbr = nbr % 10;
	count += ft_printchar(nbr + '0');
	return (count);
}

int	ft_printunbr(unsigned long c)
{
	unsigned long	nbr;
	int				count;

	count = 0;
	nbr = c;
	if (nbr >= 10)
		count += ft_printunbr(nbr / 10);
	nbr = nbr % 10;
	count += ft_printchar(nbr + '0');
	return (count);
}

int	ft_printhex(unsigned long c, char *base, char fs)
{
	unsigned long	nbr;
	int				count;

	count = 0;
	nbr = c;
	if (nbr == 0 && fs == 'p')
		return (ft_printstr("(nil)"));
	if (nbr >= 1 && nbr <= 15 && fs == 'p')
		count += ft_printstr("0x");
	if (nbr > 15)
		count += ft_printhex(nbr / 16, base, fs);
	count += ft_printchar(base[nbr % 16]);
	return (count);
}

//int	ft_printhexa(unsigned long c, char *base)
//{
//	unsigned long	nbr;
//	int	count;
//
//	count = 0;
//	nbr = c;
//	if (nbr > 15)
//		count += ft_printhexa(nbr / 16, base);
//	count += ft_printchar(base[nbr % 16]);
//	return (count);
//}
//
//
