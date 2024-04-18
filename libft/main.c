/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ibarrera <ibarrera@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/16 16:43:01 by ibarrera          #+#    #+#             */
/*   Updated: 2024/04/16 16:57:56 by ibarrera         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	main(void)
{
	char ft_str[20];
	char str[20];
	char *ft_strzero;
	char *strzero;
	char memcopy[] = "Hola 42!";
	char dest[20];
	char memkopy[] = "Hola 42!";
	char destk[20];

	ft_memset(ft_str,'a', 10);
	memset(str, 'a', 10);
	ft_str[11] = '\0';
	str[11] = '\0';
	ft_bzero(ft_strzero, 10);
	bzero(strzero, 10);
	ft_strzero[11] = '\0';
	strzero[11] = '\0';
	ft_memcpy(dest, memcopy, ft_strlen(memcopy) + 1);
	dest[strlen(memcopy)] = '\0';
	memcpy(destk, memkopy, strlen(memkopy) + 1);
	destk[strlen(memkopy)] = '\0';
	printf("ft_isalnum: %i\n",ft_isalnum('c'));
	printf("ft_isalnum: %i\n",ft_isalnum('A'));
	printf("ft_isalnum: %i\n",ft_isalnum('8'));
	printf("ft_isalnum: %i\n",ft_isalnum('('));
	printf("isalnum: %i\n",isalnum('c'));
	printf("isalnum: %i\n",isalnum('A'));
	printf("isalnum: %i\n",isalnum('8'));
	printf("isalnum: %i\n",isalnum('('));
	printf("ft_isdigit: %i\n",ft_isdigit('c'));
	printf("ft_isdigit: %i\n",ft_isdigit('A'));
	printf("ft_isdigit: %i\n",ft_isdigit('8'));
	printf("ft_isdigit: %i\n",ft_isdigit('('));
	printf("isdigit: %i\n",isdigit('c'));
	printf("isdigit: %i\n",isdigit('A'));
	printf("isdigit: %i\n",isdigit('8'));
	printf("isdigit: %i\n",isdigit('('));
	printf("ft_isalpha: %i\n",ft_isalpha('c'));
	printf("ft_isalpha: %i\n",ft_isalpha('A'));
	printf("ft_isalpha: %i\n",ft_isalpha('8'));
	printf("ft_isalpha: %i\n",ft_isalpha('('));
	printf("isalpha: %i\n",isalpha('c'));
	printf("isalpha: %i\n",isalpha('A'));
	printf("isalpha: %i\n",isalpha('8'));
	printf("isalpha: %i\n",isalpha('('));
	printf("ft_isascii: %i\n",ft_isascii('c'));
	printf("ft_isascii: %i\n",ft_isascii('A'));
	printf("ft_isascii: %i\n",ft_isascii('8'));
	printf("ft_isascii: %i\n",ft_isascii(128));
	printf("isascii: %i\n",isascii('c'));
	printf("isascii: %i\n",isascii('A'));
	printf("isascii: %i\n",isascii('8'));
	printf("isascii: %i\n",isascii(128));
	printf("ft_isprint: %i\n",ft_isprint(126));
	printf("ft_isprint: %i\n",ft_isprint(32));
	printf("ft_isprint: %i\n",ft_isprint(458));
	printf("ft_isprint: %i\n",ft_isprint(255));
	printf("isprint: %i\n",isprint(126));
	printf("isprint: %i\n",isprint(32));
	printf("isprint: %i\n",isprint(458));
	printf("isprint: %i\n",isprint(255));
	printf("ft_strlen: %zu\n", ft_strlen(str));
	printf("strlen: %zu\n", strlen(str));
	printf("ft_memset: %s\n", ft_str);
	printf("memset: %s\n", str);
	printf("ft_bzero: %s\n", ft_strzero);
	printf("bzero: %s\n", strzero);
	printf("ft_memcpy: %s\n", dest);
	printf("memcpy: %s\n", destk);
}