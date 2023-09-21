/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tiwong <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/15 20:47:05 by tiwong            #+#    #+#             */
/*   Updated: 2023/09/17 15:38:57 by tiwong           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t			i;
	int				result;
	unsigned char	*ps1;
	unsigned char	*ps2;

	i = 0;
	result = 0;
	ps1 = (unsigned char *)s1;
	ps2 = (unsigned char *)s2;
	while (i < n && result == 0)
	{
		if (ps1[i] != ps2[i] && (ps1[i] || ps2[i]))
			result = ps1[i] - ps2[i];
		else if (ps1[i] == '\0' && ps2[i] == '\0')
			return (0);
		i++;
	}
	return (result);
}
/*
int	main(void)
{
	char	S1[] = "\200";
	char	S2[] = "\0";
	size_t	ann = 2;

	printf("mine: %i\n", ft_strncmp(S1, S2, ann));
	printf("clib: %i\n", strncmp(S1, S2, ann));
	return (0);
}*/
