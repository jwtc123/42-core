/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tiwong <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/15 20:29:46 by tiwong            #+#    #+#             */
/*   Updated: 2023/09/17 13:51:18 by tiwong           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dest, const char *src, size_t size)
{
	size_t	i;
	size_t	dlen;
	size_t	slen;

	dlen = ft_strlen(dest);
	slen = ft_strlen(src);
	i = 0;
	if (size <= dlen)
		return (size + slen);
	else
	{
		while (src[i] != '\0' && i + dlen + 1 < size)
		{
			dest[dlen + i] = src[i];
			i++;
		}
		if (size > dlen + i)
			dest[dlen + i] = '\0';
	}
	return (dlen + slen);
}
/*
int	main(void)
{
	char	des[] = "bye";
	char	sr[] = "hello";
	size_t	siz = 10;

	printf("Mine   : %zu\n", ft_strlcat(des, sr, siz));
//	printf("strlcat: %zu\n", strlcat(des, sr, siz);
	return (0);
}*/
