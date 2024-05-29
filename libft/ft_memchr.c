/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ibarrera <ibarrera@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/26 11:28:15 by ibarrera          #+#    #+#             */
/*   Updated: 2024/05/29 12:09:58 by ibarrera         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	char	*str;
	char	target;
	size_t	i;

	str = ((char *)s);
	target = ((char)c);
	i = 0;
	while (i < n)
	{
		if (str[i] != target)
		{
			i++;
		}
		else
		{
			return (&((char *)s)[i]);
		}
	}
	return (0);
}
