/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft_ps.h                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: madiaz-e <madiaz-e@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/31 13:35:50 by madiaz-e          #+#    #+#             */
/*   Updated: 2025/12/01 11:00:16 by madiaz-e         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_PS_H
# define LIBFT_PS_H
# include <stdlib.h>
# include <stdio.h>
# include <unistd.h>

//PRINTF
int			ft_printf(const char *str, ...);
int			ft_putchar_printf(va_list args, int count);
size_t		ft_strlen_printf(const char *s);
void		ft_putstr_fd_printf(char *s, int fd);
int			ft_str_printf(va_list args, int count);
int			ft_putnbr_printf(int nb);
int			ft_putunsnbr_printf(unsigned int nb);
int			ft_puthex_printf(unsigned long long nb, char *hex);
int			ft_putptr_printf(void *ptr);
//SPLIT
char		**ft_split(const char *s, char c);
void		*ft_calloc(size_t nmemb, size_t size);
char		*ft_strchr(const char *s, int c);
size_t		ft_strlen(const char *str);
char		*ft_substr(const char *s, unsigned int start, size_t len);
//OTHERS
long		ft_atol(const char *nptr);

#endif