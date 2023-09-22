/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tiwong <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/22 06:22:41 by tiwong            #+#    #+#             */
/*   Updated: 2023/09/22 07:09:30 by tiwong           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstnew(void *content)
{
	t_list	*new;

	new = (t_list *)malloc(sizeof (t_list));
	if (!new)
		return (NULL);
	new->content = content;
	new->next = NULL;
	return (new);
}

int	main(void)
{
	t_list	*sample = ft_lstnew("Hello World!");

	if (sample)
	{
		printf("%s\n", (char *)sample->content);
		free(sample);
	}
	else
		printf("Error occured. Pls check.\n");
	return (1);
}	
