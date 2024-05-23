/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize_bonus.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ibarrera <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/23 11:40:49 by ibarrera          #+#    #+#             */
/*   Updated: 2024/05/23 13:09:47 by ibarrera         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int ft_lstsize(t_list *lst)
{
 size_t i;
 i = 0;
 if (!lst)
 return (0);
 while (lst != NULL)
 {
 i++;
 lst = lst -> next;
 }
 return (i);
}
