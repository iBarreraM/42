/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ibarrera <ibarrera@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/23 11:26:08 by ibarrera          #+#    #+#             */
/*   Updated: 2024/04/23 11:33:58 by ibarrera         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_toupper(int  c)
{
    if (c >= 'a' && c <= 'z')
    {
	    return (c - 'a' + 'A');
    }
    else
        return (c);
}
