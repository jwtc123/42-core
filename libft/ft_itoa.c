/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tiwong <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/20 13:11:23 by tiwong            #+#    #+#             */
/*   Updated: 2023/09/23 13:55:14 by tiwong           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	iter_len(int n)
{
	int	i;

	i = 0;
	if (n <= 0)
	{
		i++;
		n = -n;
	}
	while (n != 0)
	{
		n = n / 10;
		i++;
	}
	return (i);
}

char	*ft_itoa(int n)
{
	char	*str;
	int		len;
	long	nbr;

	nbr = n;
	if (n == -2147483648)
		return (ft_strdup("-2147483648"));
	len = iter_len(nbr);
	str = (char *)malloc((len + 1) * sizeof (char));
	if (str == NULL)
		return (NULL);
	if (nbr < 0)
		nbr = -nbr;
	str[len] = '\0';
	if (!nbr)
		str[0] = '0';
	while (len--)
	{
		str[len] = nbr % 10 + '0';
		nbr = nbr / 10;
	}
	if (n < 0)
		str[0] = '-';
	return (str);
}
//#include <stdlib.h>
//int	main(int argc, char **argv)
//{
//	//int	num = -235;
//	printf("%d\n", iter_len(atoi(argv[1])));
//	//printf("%s", ft_itoa(num));
//}	
