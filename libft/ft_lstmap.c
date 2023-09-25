/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tiwong <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/24 17:52:02 by tiwong            #+#    #+#             */
/*   Updated: 2023/09/25 18:59:30 by tiwong           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*result_list;
	t_list	*new_link;
	t_list	*node;

	result_list = NULL;
	while (lst)
	{
		new_link = f(lst->content);
		node = ft_lstnew(new_link);
		if (!node)
		{
			del(new_link);
			ft_lstclear(&result_list, del);
			return (NULL);
		}
		lst = lst ->next;
		ft_lstadd_back(&result_list, node);
	}
	ft_lstclear(&lst, del);
	return (result_list);
}
