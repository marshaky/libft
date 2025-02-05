/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marshaky <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/24 04:24:33 by marshaky          #+#    #+#             */
/*   Updated: 2025/01/26 21:36:33 by marshaky         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*head;
	t_list	*new_node;

	if (!lst || !f || !del)
		return (NULL);
	head = NULL;
	while (lst)
	{
		void *temp = f(lst->content);
		if (!temp)
		{
			ft_lstclear(&head, del);
			return (NULL);
		}
		new_node = ft_lstnew(f(lst->content));
		if (!new_node)
		{
			del(temp);
			ft_lstclear(&head, del);
			return (NULL);
		}
		ft_lstadd_back(&head, new_node);
		lst = lst->next;
	}
	return (head);
}
