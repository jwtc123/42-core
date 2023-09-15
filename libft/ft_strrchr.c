/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tiwong <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/15 20:48:26 by tiwong            #+#    #+#             */
/*   Updated: 2023/09/15 20:52:11 by tiwong           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int		n;
	char	*ps;
	char	pc;

	n = ft_strlen(s);
	ps = (char *) s;
	pc = (char) c;
	while (n >= 0)
	{
		if (ps[n] == pc)
			return (&ps[n]);
		n--;
	}
	return (NULL);
}
/*
int	main(void)
{
	char	str[] = "HEdLO";
	int	cee = 0;

	printf("Mine: %s\n", ft_strrchr(str, cee));
	printf("clib: %s\n", strrchr(str, cee));
	return (0);
}*/
