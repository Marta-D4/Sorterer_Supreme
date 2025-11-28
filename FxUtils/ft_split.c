/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: madiaz-e <madiaz-e@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/13 11:02:04 by madiaz-e          #+#    #+#             */
/*   Updated: 2025/11/28 11:34:01 by madiaz-e         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft_ps.h"

static size_t	ft_wcount(const char *str, char c)
{
	size_t	words;

	if (!*str)
		return (0);
	words = 0;
	while (*str)
	{
		while (*str == c)
			str++;
		if (*str)
			words++;
		while (*str != c && *str)
			str++;
	}
	return (words);
}

static char	**ft_freemem(const char	**splt, size_t len)
{
	size_t	x;

	x = 0;
	while (x < len)
	{
		free((void *)splt[x]);
		x++;
	}
	free(splt);
	return (NULL);
}

static int	ft_fill_loop(const char **splt, const char *str, char c, int len)
{
	int		x;
	size_t	word;

	x = 0;
	while (*str)
	{
		while (*str == c && *str)
			str++;
		if (*str)
		{
			if (ft_strchr(str, c))
				word = ft_strchr(str, c) - str;
			else
				word = ft_strlen(str);
			splt[x] = ft_substr(str, 0, word);
			if (!splt[x])
				return (ft_freemem(splt, len), 0);
			x++;
			str += word;
		}
	}
	return (1);
}

char	**ft_split(const char *s, char c)
{
	int				len;
	const char		**splt;

	if (!s)
		return (0);
	len = ft_wcount(s, c);
	splt = (const char **) ft_calloc(len + 1, sizeof(char *));
	if (!splt)
		return (0);
	if (!ft_fill_loop(splt, s, c, len))
		return (0);
	return ((char **)splt);
}
