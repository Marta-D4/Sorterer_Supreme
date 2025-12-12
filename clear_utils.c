/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   clear_utils.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: madiaz-e <madiaz-e@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/02 11:18:21 by madiaz-e          #+#    #+#             */
/*   Updated: 2025/12/12 11:30:50 by madiaz-e         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	lst_delone(t_list *lst)
{
	if (lst)
		free(lst);
}

void	lst_clear(t_list **lst)
{
	t_list	*tmp;

	if (!lst)
		return ;
	tmp = *lst;
	while (*lst)
	{
		tmp = (*lst)->next;
		lst_delone(*lst);
		*lst = tmp;
	}
}

void	ft_cleararray(char **val)
{
	int	i;

	if (!val)
		return ;
	i = 0;
	while (val[i])
		free(val[i++]);
	free(val);
}

void	ft_freeall(char **val, t_list **lst)
{
	ft_cleararray(val);
	lst_clear(lst);
	ft_putstr_fd_printf("ERROR", 2);
	exit(1);
}
