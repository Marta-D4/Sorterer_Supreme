/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   list_utils.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: madiaz-e <madiaz-e@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/26 12:37:57 by madiaz-e          #+#    #+#             */
/*   Updated: 2025/12/12 11:24:18 by madiaz-e         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

t_list	*lst_new(int value)
{
	t_list	*elem;

	elem = malloc(sizeof(t_list));
	if (!elem)
		return (NULL);
	elem->value = value;
	elem->cost_top = 0;
	elem->below_median = 0;
	elem->target_cost_top = 0;
	elem->target_below_median = 0;
	elem->total_cost = 0;
	elem->next = NULL;
	return (elem);
}

int	lst_size(t_list *lst)
{
	int		i;
	t_list	*tmp;

	i = 0;
	tmp = lst;
	while (tmp)
	{
		i++;
		tmp = tmp->next;
	}
	return (i);
}

t_list	*lst_last(t_list *lst)
{
	t_list	*tmp;

	if (!lst)
		return (NULL);
	tmp = lst;
	while (tmp->next)
		tmp = tmp->next;
	return (tmp);
}

void	lst_addback(t_list **lst, t_list *newnode)
{
	t_list	*last;

	if (!lst || !newnode)
		return ;
	last = lst_last(*lst);
	if (last == NULL)
	{
		*lst = newnode;
		return ;
	}
	last->next = newnode;
}

void	lst_addfront(t_list **lst, t_list *newnode)
{
	if (!lst || !newnode)
		return ;
	newnode->next = *lst;
	*lst = newnode;
}
