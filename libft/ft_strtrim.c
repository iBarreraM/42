/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ibarrera <ibarrera@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/29 11:03:19 by ibarrera          #+#    #+#             */
/*   Updated: 2024/05/29 11:03:28 by ibarrera         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include  "libft.h"

char *ft_strtrim(char const *s1, char const *set)
{
	size_t i;

       if (!s1 || !set)
	       return (NULL);
       	while (ft_strchr(set, *s1) && *s1)
		s1++;
	i = ft_strlen(s1);
	while (ft_strchr(set, s1[i]) && i != 0)
		i--;
	return (ft_substr(s1, 0, i + 1));
}
