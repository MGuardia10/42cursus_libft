/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mguardia <mguardia@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/19 14:51:35 by mguardia          #+#    #+#             */
/*   Updated: 2023/09/19 15:45:38 by mguardia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*list;
	t_list	*node;
	void	*set;

	if (!lst || !f || !del)
		return (NULL);
	list = NULL;
	while (lst)
	{
		set = f(lst->content);
		node = ft_lstnew(set);
		if (!node)
		{
			del(set);
			ft_lstclear(&list, del);
			return (list);
		}
		ft_lstadd_back(&list, node);
		lst = lst->next;
	}
	return (list);
}
