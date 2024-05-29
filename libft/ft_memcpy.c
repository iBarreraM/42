/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ibarrera <ibarrera@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/16 12:27:30 by ibarrera          #+#    #+#             */
/*   Updated: 2024/05/29 10:59:35 by ibarrera         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void *ft_memcpy(void *dst, const void *src, size_t n)
{
	size_t m;
	unsigned char *des = (unsigned char *)dst;
	const unsigned char *sor = (const unsigned char *) src;// por aqui puede ser

	m = 0;
	if ((src == NULL && dst == NULL))
		return (dst);
	while(m < n){
		des[m] = sor[m];
			m++;
	}
	return (dst);
}
