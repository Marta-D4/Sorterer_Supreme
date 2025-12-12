/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   turkish_sort.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: madiaz-e <madiaz-e@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/10 12:07:29 by madiaz-e          #+#    #+#             */
/*   Updated: 2025/12/12 11:57:59 by madiaz-e         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

t_list	*select_few_moves(t_list *b)
{
	t_list	*lowest;

	lowest = b;
	while (b)
	{
		if (b->total_cost < lowest->total_cost)
			lowest = b;
		b = b->next;
	}
	return (lowest);
}

void	final_moves(t_list **a, t_list *lowest)
{
	while (lowest->below_median == 0 && lowest->cost_top)
	{
		fx_ra(a);
		lowest->cost_top--;
	}
	while (lowest->below_median == 1 && lowest->cost_top)
	{
		fx_rra(a);
		lowest->cost_top--;
	}
}

void	ft_turkish_sort(t_list **a, t_list **b)
{
	int		biggest;
	t_list	*fewer_moves;

	biggest = lst_find_biggest(*a);
	while (lst_size(*a) > 3)
	{
		if (biggest == (*a)->value)
			fx_ra(a);
		fx_pb(a, b);
	}
	ft_little_sort(a);
	while (*b)
	{
		moves_cost(*b);
		target_cost(*a, *b);
		total_cost(b);
		fewer_moves = select_few_moves(*b);
		move_to_push(a, b, fewer_moves);
	}
	moves_cost(*a);
	final_moves(a, lst_find_lowest(*a));
}
