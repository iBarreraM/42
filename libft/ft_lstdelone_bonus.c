/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdelone_bonus.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ibarrera <ibarrera@student.42malaga.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/23 13:08:51 by ibarrera          #+#    #+#             */
/*   Updated: 2024/05/23 13:08:53 by ibarrera         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void ft_lstdelone(t_list *lst, void (*del)(void *))
{
 if (!lst || !del)
 return ;
 if (lst && del)
 {
 del (lst->content);
 free(lst);
 }
}
