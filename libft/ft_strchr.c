/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tiwong <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/12 21:40:40 by tiwong            #+#    #+#             */
/*   Updated: 2023/09/12 22:56:55 by tiwong           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	char	pc;
	char	*ps;

	pc = (char) c;
	ps = (char *) s;
	while (*ps != pc)
	{
		if (*ps == '\0')
			return (NULL);
		ps++;
	}
	return (ps);
}
/*
int	main(void)
{
	char	str[] = "HELdO";
	int	cee = 0;

	printf("ft_strchr: %s\n", ft_strchr(str, cee));
	printf("strchr   : %s\n", strchr(str, cee));
	return (0);
}*/
