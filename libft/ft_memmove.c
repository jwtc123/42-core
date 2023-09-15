/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tiwong <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/10 10:46:15 by tiwong            #+#    #+#             */
/*   Updated: 2023/09/15 20:43:01 by tiwong           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	unsigned char		*pd;
	unsigned const char	*ps;

	pd = (unsigned char *)dest;
	ps = (unsigned const char *)src;
	if (ps < pd)
	{
		while (n-- > 0)
		{
			pd[n] = ps[n];
		}
	}
	else
		ft_memcpy(dest, src, n);
	return (dest);
}
/*
int	main(void)
{
	char	des[] = "Hello";
	char	sr[] = "Bye";
	size_t	ann = 3;

	ft_memmove(des, sr, ann);
	printf("%s\n", des);
	memmove(des, sr, ann);
	printf("%s\n", des);
}*/
