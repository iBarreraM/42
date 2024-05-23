/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back_bonus.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ibarrera <ibarrera@student.42malaga.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/23 13:07:38 by ibarrera          #+#    #+#             */
/*   Updated: 2024/05/23 13:07:39 by ibarrera         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void ft_lstadd_back(t_list **lst, t_list *new)
{
 if (!lst || !new)
 return ;
 if (*lst)
 (ft_lstlast(*lst))->next = new;
 else
 *lst = new;
}
