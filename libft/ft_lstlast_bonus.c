/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlast_bonus.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ibarrera <ibarrera@student.42malaga.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/23 13:09:12 by ibarrera          #+#    #+#             */
/*   Updated: 2024/05/23 13:09:13 by ibarrera         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

t_list *ft_lstlast(t_list *lst)
{
 if (!lst)
 return (NULL);
 while (lst->next)
 lst = lst->next;
 return (lst);
}
