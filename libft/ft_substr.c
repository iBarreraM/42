/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ibarrera <ibarrera@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/29 14:52:31 by ibarrera          #+#    #+#             */
/*   Updated: 2024/04/29 16:04:25 by ibarrera         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char *ft_substr(const char *s, unsigned int start, size_t len)
{
	char *c;
	size_t i;

   	if (!s)
		   return (NULL);
	if (ft_strlen(s) <= start)
		return (ft_strdup(""));
	if (len > (ft_strlen(s) - start))
		len = (ft_strlen(s) - start);

	c = (char *)malloc((len + 1) * sizeof(char));

	if (!c)
		return (NULL);

	i = 0;
	while (i < len && s[start + i] != '\0')
	{
		c[i] = s[start + i];
		i++;
	}
	c[len] = '\0';
	return (c);
}
