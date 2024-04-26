/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ibarrera <ibarrera@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/26 11:28:15 by ibarrera          #+#    #+#             */
/*   Updated: 2024/04/26 12:17:38 by ibarrera         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void *ft_memchr(const void *s, int c, size_t n)
{
	unsigned char *z;
	size_t m;

	z = (unsigned char *)s;
	m = 0;
	while (n--)
	{
		if (z[m] == (unsigned char)c)
			return (&z[m]);
			m++;
	}
			return (NULL);
}
