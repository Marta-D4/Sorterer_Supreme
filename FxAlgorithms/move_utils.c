/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   move_utils.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: madiaz-e <madiaz-e@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/11 13:00:57 by madiaz-e          #+#    #+#             */
/*   Updated: 2025/12/11 13:12:33 by madiaz-e         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	move_a_top(t_list **a, t_list *few_moves)
{
	while (few_moves->target_cost_top && few_moves->target_below_median == 1)
	{
		fx_rra(a);
		few_moves->target_cost_top--;
	}
	while (few_moves->target_cost_top && few_moves->target_below_median == 0)
	{
		fx_ra(a);
		few_moves->target_cost_top--;
	}
}

void	move_b_top(t_list **b, t_list *few_moves)
{
	while (few_moves->cost_top && few_moves->below_median == 1)
	{
		fx_rrb(b);
		few_moves->cost_top--;
	}
	while (few_moves->cost_top && few_moves->below_median == 0)
	{
		fx_rb(b);
		few_moves->cost_top--;
	}
}

void	move_to_push(t_list **a, t_list **b, t_list *few_moves)
{
	if (few_moves->below_median == 0 && few_moves->target_below_median == 0)
	{
		while (few_moves->cost_top && few_moves->target_cost_top)
		{
			fx_rr(a, b);
			few_moves->cost_top--;
			few_moves->target_cost_top--;
		}
	}
	else if (few_moves->below_median == 1
		&& few_moves->target_below_median == 1)
	{
		while (few_moves->cost_top && few_moves->target_cost_top)
		{
			fx_rrr(a, b);
			few_moves->cost_top--;
			few_moves->target_cost_top--;
		}
	}
	move_a_top(a, few_moves);
	move_b_top(b, few_moves);
	fx_pa(a, b);
}
