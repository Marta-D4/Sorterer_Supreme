/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: madiaz-e <madiaz-e@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/07 12:38:27 by madiaz-e          #+#    #+#             */
/*   Updated: 2025/12/12 10:52:35 by madiaz-e         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft_ps.h"

char	*ft_strdup(const char *s)
{
	char	*ptr;
	size_t	x;

	ptr = malloc(ft_strlen(s) + 1);
	x = 0;
	if (!ptr)
		return (NULL);
	while (s[x])
	{
		ptr[x] = s[x];
		x++;
	}
	ptr[x] = 0;
	return (ptr);
}
