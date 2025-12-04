/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   clear_utils.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: madiaz-e <madiaz-e@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/02 11:18:21 by madiaz-e          #+#    #+#             */
/*   Updated: 2025/12/04 11:01:28 by madiaz-e         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	lst_clear(t_list **lst, void (*del)(void *))
{
	t_list	*tmp;
	t_list	*next;

	if (!lst || !del)
		return ;
	tmp = *lst;
	while (tmp)
	{
		next = tmp->next;
		del(tmp);
		tmp = next;
	}
	*lst = NULL;
}

void	ft_cleararray(char **val)
{
	int	i;

	if (!val)
		return ;
	i = 0;
	while (val[i])
		free(val[i++]);
	free(val[i]);
}

void	ft_freeall(char **val, t_list **lst)
{
	if (lst)
		lst_clear(lst, free);
	if (val)
		ft_cleararray(val);
	ft_putstr_fd_printf("ERROR", 2);
	exit(2);
}
