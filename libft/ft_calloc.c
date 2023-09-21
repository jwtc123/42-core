/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tiwong <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/16 15:47:22 by tiwong            #+#    #+#             */
/*   Updated: 2023/09/16 16:51:50 by tiwong           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	void	*ptr;

	ptr = malloc(nmemb * size);
	if (ptr == NULL)
		return (NULL);
	ft_bzero(ptr, nmemb * size);
	return (ptr);
}
/*
int	main(void)
{
	size_t	nmemb = 7;
	size_t	size = 5;
	char	*s;
	char	*t;

	s = ft_calloc(nmemb, size);
	t = calloc(nmemb, size);
	printf("mine: %s\n", s);
	printf("clib: %s\n", t);
	free(s);
	free(t);
	return (0);
}*/
