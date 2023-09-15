/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tiwong <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/15 20:47:36 by tiwong            #+#    #+#             */
/*   Updated: 2023/09/15 23:06:09 by tiwong           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	l_little;
	size_t	i;

	i = 0;
	l_little = ft_strlen(little);
	if (little[0] == '\0')
		return ((char *)big);
	while (big[i] != '\0' && i < len)
	{
		if (ft_strncmp(&big[i], little, l_little) == 0)
			return ((char *)&big[i]);
		i++;
	}
	return (NULL);
}
/*
int	main(void)
{
	char	hays[] = "Foo Bar Baz";
	char	nee[] = "Bar";
	int	n = 2;

	printf("mine: %s\n", ft_strnstr(hays, nee, n));
//	printf("clib: %s\n", strnstr(hays, nee, n));
}*/	
