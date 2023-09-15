/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tiwong <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/15 21:07:31 by tiwong            #+#    #+#             */
/*   Updated: 2023/09/15 21:41:40 by tiwong           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	unsigned char	*ps1;
	unsigned char	*ps2;
	size_t			i;

	ps1 = (unsigned char *) s1;
	ps2 = (unsigned char *) s2;
	i = 0;
	while (i < n)
	{
		if ((ps1[i] - ps2[i]) != 0)
			return (ps1[i] - ps2[i]);
		else
			i++;
	}
	return (0);
}
/*
int	main(void)
{
	unsigned char	str1[] = "";
	unsigned char	str2[] = "";
	int	n = 5;
	int	result;

	result = ft_memcmp(str1, str2, n);
	printf("mine: %d\n", result);
	printf("clib: %d\n", memcmp(str1, str2, n));
	return (0);
}*/
