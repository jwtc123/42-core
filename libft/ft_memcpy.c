/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tiwong <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/09 21:48:14 by tiwong            #+#    #+#             */
/*   Updated: 2023/09/10 17:55:14 by tiwong           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	int	i;
	unsigned char	*pd;
	unsigned const char	*ps;

	pd = (unsigned char *)dest;
	ps = (unsigned const char *)src;
	i = 0;
	while (n > 0)
	{
		pd[i] = ps[i];
		i++;
		n--;
	}
	return (dest);
}
/*
int	main(void)
{
	char	des[] = "right here right now";
	char	sr[] = "Bye Bye";
	size_t	ann = 6;

	ft_memcpy(des, sr, ann);
	printf("%s\n", des);
	return (0);
}*/
