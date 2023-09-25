/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tiwong <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/08 21:21:26 by tiwong            #+#    #+#             */
/*   Updated: 2023/09/25 19:17:39 by tiwong           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *s, int c, size_t n)
{
	unsigned char	*p;

	p = (unsigned char *)s;
	while (n > 0)
	{
		*p = (unsigned char)c;
		n--;
		p++;
	}
	return (s);
}
/*
int	main(void)
{
	char	str[] = "Hello Ting";
	int	cee = 33;
	size_t	ann = 4;
	char	*a;
	char	*b;

	a = ft_memset(str, cee, ann);
	b = memset(str, cee, ann);

	printf("function: %s\n", a);
	printf("*memset : %s\n", b);
	return (0);
}*/
