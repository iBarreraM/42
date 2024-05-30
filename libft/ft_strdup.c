/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ibarrera <ibarrera@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/29 12:38:46 by ibarrera          #+#    #+#             */
/*   Updated: 2024/05/30 12:54:36 by ibarrera         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s1)
{
	char	*scpy;
	size_t	t;
	size_t	i;

	t = ft_strlen(s1);
	scpy = (char *)malloc((t + 1) * sizeof(char));
	if (!scpy)
		return (NULL);
	i = 0;
	while (i < t)
	{
		scpy[i] = s1[i];
		i++;
	}
	scpy[t] = '\0';
	return (scpy);
}
