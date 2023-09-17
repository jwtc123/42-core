/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tiwong <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/15 20:47:36 by tiwong            #+#    #+#             */
/*   Updated: 2023/09/17 14:28:33 by tiwong           ###   ########.fr       */
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
	while (big[i] != '\0' && i + l_little <= len)
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
	char	hays[] = "MZIRIBMZIRIBMZE123";
	char	nee[] = "MZIRIBMZE";
	int	n = ft_strlen(nee);

	printf("mine: %s\n", ft_strnstr(hays, nee, n));
//	printf("clib: %s\n", strnstr(hays, nee, n));
}*/	
