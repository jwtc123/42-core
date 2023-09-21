/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tiwong <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/09 17:22:20 by tiwong            #+#    #+#             */
/*   Updated: 2023/09/15 20:36:09 by tiwong           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

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
/*
int	main(void)
{
	char	str[] = "come here Ting";
	char	str1[] = "come here Ting";
	size_t	ann = 5;

	ft_bzero(str, ann);
	printf("Function: %s\n", str);
	bzero(str1, ann);
	printf("bzero   : %s\n", str1);
	return (0);
}*/
