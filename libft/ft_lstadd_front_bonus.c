/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_front_bonus.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ibarrera <ibarrera@student.42malaga.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/23 13:07:48 by ibarrera          #+#    #+#             */
/*   Updated: 2024/05/23 13:08:06 by ibarrera         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void ft_lstadd_front(t_list **lst, t_list *new)
{
 if (!lst || !new)
 return ;
 new -> next = *lst;
 *lst = new;
}
