/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ibarrera <ibarrera@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/09 15:13:37 by ibarrera          #+#    #+#             */
/*   Updated: 2024/04/09 15:44:49 by ibarrera         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <ctype.h>

int	ft_isdigit(int c)
{
	if (c >= 48 && c <= 57)
		return (1);
	else return (0);
}

int	main(void)
{
	printf("%i\n",ft_isdigit('1'));
	printf("%i\n",ft_isdigit('0'));
	printf("%i\n",ft_isdigit('('));

	printf("%i\n",isdigit('1'));
	printf("%i\n",isdigit('0'));
	printf("%i\n",isdigit('('));

	return 0;

}

