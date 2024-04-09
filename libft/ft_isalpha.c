/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ibarrera <ibarrera@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/08 13:36:58 by ibarrera          #+#    #+#             */
/*   Updated: 2024/04/08 15:48:28 by ibarrera         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <ctype.h>

int	ft_isalpha(int c)
{
	if (c < 65 || c > 90 && c < 97 || c > 122)
		return (0);
	else return (1);
}

int main(void)
{
	printf("%i\n",ft_isalpha("c"));
	printf("%i\n",ft_isalpha("A"));
	printf("%i\n",ft_isalpha(70));

	printf("%i\n",isalpha("c"));
	printf("%i\n",isalpha("A"));
	printf("%i\n",isalpha(70));

	return 0;
	
}
