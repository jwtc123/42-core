/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tiwong <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/16 16:52:28 by tiwong            #+#    #+#             */
/*   Updated: 2023/09/16 17:46:04 by tiwong           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s)
{
	char	*ps;

	ps = (char *)malloc(ft_strlen(s) + 1);
	if (ps == NULL)
		return (NULL);
	ft_strlcpy(ps, s, ft_strlen(s) + 1);
	return (ps);
}
/*
int	main(void)
{
	char	s[] = "Hello";
	char	t[] = "Nope";
	char	*s_cpy;
	char	*t_cpy;

	s_cpy = ft_strdup(s);
	t_cpy = strdup(t);
	printf("mine: %s\n", s_cpy);
	free(s_cpy);
	printf("clib: %s\n", t_cpy);
	free(t_cpy);
	return (0);
}*/
