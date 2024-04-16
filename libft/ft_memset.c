/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ibarrera <ibarrera@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/16 16:49:43 by ibarrera          #+#    #+#             */
/*   Updated: 2024/04/16 16:49:45 by ibarrera         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include  "libft.h"

void *ft_memset(void *b, int c, size_t len)
{
	unsigned char *p = b;
	while (len--){
		*p++ = (unsigned char)c;
	}
	return (b);
}
