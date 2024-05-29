/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ibarrera <ibarrera@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/26 12:18:42 by ibarrera          #+#    #+#             */
/*   Updated: 2024/05/29 10:59:18 by ibarrera         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t a;
	const char *z1;
	const char *z2;

	z1 = (const char *)s1;
	z2 = (const char *)s2;
	a = 0;
	while (n--)
	{
		if (z1[a] != z2[a])
		{
			return ((unsigned char)z1[a] - (unsigned char)z2[a]);
		}
		a++;
	}
	return (0);
}
