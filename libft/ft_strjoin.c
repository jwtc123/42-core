/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tiwong <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/19 17:59:31 by tiwong            #+#    #+#             */
/*   Updated: 2023/09/19 22:01:27 by tiwong           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*temp;
	int		i;
	int		j;

	temp = (char *)malloc((ft_strlen(s1) + ft_strlen(s2) + 1) * sizeof (char));
	if (temp == NULL)
		return (NULL);
	i = 0;
	j = 0;
	while (s1[i] != '\0')
	{
		temp[i] = s1[i];
		i++;
	}
	if (ft_strlen(s2) == 0)
	{
		temp[i] = '\0';
		return (temp);
	}
	while (s2[j] != '\0')
		temp[i++] = s2[j++]; 
	temp[i] = '\0';
	return (temp);
}
/*
int	main(void)
{
	char	s1[] = "Hello";
	char	s2[] = "Bye";

	printf("%s\n", ft_strjoin(s1, s2));
}*/
