/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ibarrera <ibarrera@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/23 12:06:24 by ibarrera          #+#    #+#             */
/*   Updated: 2024/05/30 12:41:58 by ibarrera         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*new_lst;
	t_list	*new_node;

	new_lst = NULL;
	while (lst)
	{
		new_node = ft_lstnew(NULL);
		if (!new_node)
		{
			ft_lstclear(&new_lst, del);
			return (NULL);
		}
		new_node ->content = f(lst->content);
		ft_lstadd_back(&new_lst, new_node);
		lst = lst->next;
	}
	return (new_lst);
}
