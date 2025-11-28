/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: madiaz-e <madiaz-e@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/06 10:51:27 by madiaz-e          #+#    #+#             */
/*   Updated: 2025/10/06 12:14:17 by madiaz-e         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	unsigned int	x;
	char			cc;

	x = 0;
	cc = (char) c;
	while (s[x])
	{
		if (s[x] == cc)
			return ((char *)&s[x]);
		x++;
	}
	if (s[x] == cc)
		return ((char *)&s[x]);
	return (NULL);
}
