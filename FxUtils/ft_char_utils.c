/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_char_utils.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: madiaz-e <madiaz-e@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/04 13:08:44 by madiaz-e          #+#    #+#             */
/*   Updated: 2025/11/28 11:09:54 by madiaz-e         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft_ps.h"

int	ft_putchar_printf(va_list args, int count)
{
	char	c;

	c = va_arg(args, int);
	count++;
	write(1, &c, 1);
	return (count);
}

size_t	ft_strlen_printf(const char *s)
{
	size_t	i;

	i = 0;
	while (s[i])
		i++;
	return (i);
}

void	ft_putstr_fd_printf(char *s, int fd)
{
	int	i;

	i = 0;
	while (s[i])
	{
		write(fd, &s[i], 1);
		i++;
	}
}

int	ft_str_printf(va_list args, int count)
{
	char	*str;

	str = va_arg(args, char *);
	if (!str)
	{
		write(1, "(null)", 6);
		return (count + 6);
	}
	ft_putstr_fd_printf(str, 1);
	count += ft_strlen_printf(str);
	return (count);
}
