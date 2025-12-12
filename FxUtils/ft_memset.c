/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: madiaz-e <madiaz-e@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/01 12:00:39 by madiaz-e          #+#    #+#             */
/*   Updated: 2025/12/12 10:49:34 by madiaz-e         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft_ps.h"

void	*ft_memset(void *s, int c, size_t n)
{
	char	*tmp;
	size_t	x;

	tmp = s;
	x = 0;
	while (x < n)
	{
		tmp[x] = c;
		x++;
	}
	return (s);
}
