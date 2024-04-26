/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ibarrera <ibarrera@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/26 12:39:20 by ibarrera          #+#    #+#             */
/*   Updated: 2024/04/26 13:18:28 by ibarrera         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

char *ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t n;
	size_t i;
	size_t j;
	n = ft_strlen(needle);

	if(*needle == '\0')
		return((char *)haystack);
	while (*haystack && len >= n)
	{
		i = 0;
		while (haystack[i] == needle[j] && needle[i] == haystack[i])
				if (i == n)
				return ((char *)haystack);
					haystack++;
					n--;
	}
	return (NULL);
}


