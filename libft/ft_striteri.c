/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tiwong <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/20 12:16:34 by tiwong            #+#    #+#             */
/*   Updated: 2023/09/20 12:34:43 by tiwong           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_striteri(char *s, void (*f)(unsigned int, char *))
{
	unsigned int	i;

	i = 0;
	while (s[i])
	{
		f(i, &s[i]);
		i++;
	}
}
/*
void	ft_to_upper(unsigned int i, char *c)
{
	i = 0;
	while (c[i] >= 97 && c[i] <= 122)
	{
		c[i] = c[i] - 32;
		i++;
	}
}

int	main(void)
{
	char	s[] = "Hello";
	
	ft_striteri(s, ft_to_upper);
	printf("%s\n", s);
}*/
