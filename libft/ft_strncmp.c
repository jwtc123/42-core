/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tiwong <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/15 20:47:05 by tiwong            #+#    #+#             */
/*   Updated: 2023/09/15 21:06:27 by tiwong           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t	i;
	int		result;

	i = 0;
	result = 0;
	while (i < n && result == 0)
	{
		if (s1[i] != s2[i] && (s1[i] || s2[i]))
			result = s1[i] - s2[i];
		else if (s1[i] == '\0' && s2[i] == '\0')
			return (0);
		i++;
	}
	return (result);
}
/*
int	main(void)
{
	char	S1[] = "aaa";
	char	S2[] = "baa";
	size_t	ann = 3;

	printf("mine: %i\n", ft_strncmp(S1, S2, ann));
	printf("clib: %i\n", strncmp(S1, S2, ann));
	return (0);
}*/
