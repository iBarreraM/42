/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ibarrera <ibarrera@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/18 11:38:15 by ibarrera          #+#    #+#             */
/*   Updated: 2024/04/18 12:20:12 by ibarrera         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void *ft_memmove(void *dst, const void *src, size_t len)
{
	size_t m;
	size_t s;
	unsigned char *des = (unsigned char *)dst;
	const unsigned char *sor = (const unsigned char *) src;
	if ((src == NULL && dst == NULL))
		return (dst);

	if (dst <= src){
		while (m < len){
			des[m] = sor[m];
			m++;
	}
	}
		return(dst);

	if (dst > src){
		m = ft_strlen(src);
		s = ft_strlen(dst);
		while (m != 0){
			des[s] = sor[m];
			m--;
		}
	}
	return(dst);
}
