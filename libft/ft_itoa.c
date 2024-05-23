/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ibarrera <ibarrera@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/14 10:34:51 by ibarrera          #+#    #+#             */
/*   Updated: 2024/05/23 12:57:49 by ibarrera         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char			*ft_itoa(int n);

static size_t	len_int(int n)
{
	size_t	len;

	len = 0;
	if (n <= 0)
		len++;
	while (n != 0)
	{
		len++;
		n = n / 10;
	}
	return (len);
}

char	*ft_itoa(int n)
{
	char	*str;
	size_t	len;
	long	nl;

	nl = n;
	len = len_int(nl);
	str = (char *)malloc(sizeof(char) * (len + 1));
	if (!str)
		return (NULL);
	if (nl < 0)
	{
		str[0] = '-';
		nl = -nl;
	}
	str[len] = '\0';
	str[--len] = (nl % 10) + '0';
	nl /= 10;
	while (nl != 0 && len--)
	{
		str[len] = (nl % 10) + '0';
		nl /= 10;
	}
	return (str);
}
