/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ibarrera <ibarrera@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/23 14:18:02 by ibarrera          #+#    #+#             */
/*   Updated: 2024/05/30 12:53:29 by ibarrera         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_countchar(char const *s, char c);
static int	ft_wordlen(char const *s, char c);
static char	**ft_fill(char const *s, int words, char c, char **splitted);
static void	*ft_free(char **splitted, int words);

char	**ft_split(char const *s, char c)
{
	char	**splitted;
	int		words;

	if (!s)
		return (NULL);
	words = ft_countchar(s, c);
	splitted = (char **)malloc(sizeof(char *) * (words + 1));
	if (!splitted)
		return (NULL);
	splitted = ft_fill(s, words, c, splitted);
	return (splitted);
}

static int	ft_countchar(char const *s, char c)
{
	int		i;
	int		words;

	words = 0;
	i = 0;
	while (s[i])
	{
		if (s[i] != c && (s[i + 1] == c || s[i + 1] == '\0'))
			words++;
		i++;
	}
	return (words);
}

static int	ft_wordlen(char const *s, char c)
{
	int		i;
	int		len;

	i = 0;
	len = 0;
	while (s[i] != c && s[i] != '\0')
	{
		i++;
		len++;
	}
	return (len);
}

static void	*ft_free(char **splitted, int words)
{
	int	i;

	i = 0;
	while (i < words)
	{
		free(splitted[i]);
		i++;
	}
	free(splitted);
	return (NULL);
}

static char	**ft_fill(char const *s, int words, char c, char **splitted)
{
	int		i;
	int		j;
	int		len;

	i = 0;
	while (i < words)
	{
		while (*s == c)
			s++;
		len = ft_wordlen(s, c);
		splitted[i] = (char *)malloc(sizeof(char) * (len + 1));
		if (!splitted[i])
			return (ft_free(splitted, i));
		j = 0;
		while (j < len)
			splitted[i][j++] = *s++;
		splitted[i][j] = 0;
		i++;
	}
	splitted[i] = NULL;
	return (splitted);
}
