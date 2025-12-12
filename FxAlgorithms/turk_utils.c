/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   turk_utils.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: madiaz-e <madiaz-e@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/11 11:23:17 by madiaz-e          #+#    #+#             */
/*   Updated: 2025/12/12 11:03:50 by madiaz-e         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	moves_cost(t_list *lst)
{
	int	size_lst;
	int	i;

	size_lst = lst_size(lst);
	i = 0;
	while (lst)
	{
		if (i <= size_lst / 2)
		{
			lst->cost_top = i;
			lst->below_median = 0;
		}
		else
		{
			lst->cost_top = size_lst - i;
			lst->below_median = 1;
		}
		lst = lst->next;
		i++;
	}
}

int	get_target(t_list *a, t_list *b)
{
	int		target;

	target = lst_find_biggest(a);
	while (a)
	{
		if (a->value > b->value && a->value < target)
			target = a->value;
		a = a->next;
	}
	return (target);
}

void	target_cost(t_list *a, t_list *b)
{
	t_list	*save;
	int		i;

	while (b)
	{
		save = a;
		i = 0;
		while (save->value != get_target(a, b))
		{
			i++;
			save = save->next;
		}
		if (i <= lst_size(a) / 2)
		{
			b->target_cost_top = i;
			b->target_below_median = 0;
		}
		else
		{
			b->target_cost_top = lst_size(a) - i;
			b->target_below_median = 1;
		}
		b = b->next;
	}
}

void	total_cost(t_list **b)
{
	t_list	*tmp;

	tmp = *b;
	while (tmp)
	{
		if (tmp->below_median == tmp->target_below_median)
		{
			if (tmp->target_cost_top > tmp->cost_top)
				tmp->total_cost = tmp->target_cost_top;
			else
				tmp->total_cost = tmp->cost_top;
		}
		else
			tmp->total_cost = tmp->cost_top + tmp->target_cost_top;
		tmp = tmp->next;
	}
}
