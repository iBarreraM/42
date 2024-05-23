/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstiter_bonus.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ibarrera <ibarrera@student.42malaga.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/23 13:09:02 by ibarrera          #+#    #+#             */
/*   Updated: 2024/05/23 13:09:04 by ibarrera         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void ft_lstiter(t_list *lst, void (*f)(void *))
{
 if (!lst)
 return ;
 while (lst)
 {
 f(lst -> content);
 lst = lst ->next;
 }
}
