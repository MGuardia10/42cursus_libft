/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstiter_bonus.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mguardia <mguardia@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/19 14:38:06 by mguardia          #+#    #+#             */
/*   Updated: 2023/10/30 20:26:34 by mguardia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * The function `ft_lstdelone` deletes a single node from a linked list and frees the memory associated
 * with it.
 * 
 * @param lst The parameter `lst` is a pointer to the node in a linked list that needs to be deleted.
 * @param del The "del" parameter is a function pointer that points to a function responsible for
 * deleting the content of a node in a linked list. The function takes a void pointer as its parameter,
 * which represents the content of the node to be deleted.
 * 
 * @return The function does not return anything. It has a void return type.
 */
void	ft_lstiter(t_list *lst, void (*f)(void *))
{
	if (!lst || !f)
		return ;
	while (lst != NULL)
	{
		f(lst->content);
		lst = lst->next;
	}
}
