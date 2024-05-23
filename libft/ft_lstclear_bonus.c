/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear_bonus.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ibarrera <ibarrera@student.42malaga.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/23 13:07:23 by ibarrera          #+#    #+#             */
/*   Updated: 2024/05/23 13:08:43 by ibarrera         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void ft_lstclear(t_list **lst, void (*del)(void *))
{
 t_list *aux;
 if (!lst || !del)
 return ;
 while (*lst)
 {
 aux = (*lst)->next;
 ft_lstdelone(*lst, del);
 *lst = aux;
 }
}
