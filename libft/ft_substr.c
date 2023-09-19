/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tiwong <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/18 22:04:47 by tiwong            #+#    #+#             */
/*   Updated: 2023/09/19 22:35:36 by tiwong           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*sub;
	char	*ps;
	size_t	i;

	ps = (char *)s;
	sub = malloc((len + 1) * sizeof (char));
	if (sub == NULL)
		return (NULL);
	i = 0;
	if (start >= ft_strlen(ps))
		return (ft_strdup(""));
	if (len > ft_strlen(ps) - start)
		len = ft_strlen(ps) - start;
	while (start < ft_strlen(ps) && len > 0 && *ps && i < len)
	{
		sub[i] = ps[start];
		i++;
		start++;
	}
	sub[i] = '\0';
	return (sub);
}
