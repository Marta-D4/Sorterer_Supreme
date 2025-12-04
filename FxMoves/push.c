/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: madiaz-e <madiaz-e@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/04 12:49:03 by madiaz-e          #+#    #+#             */
/*   Updated: 2025/12/04 13:05:17 by madiaz-e         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	fx_push(t_list **nodeFrom, t_list **nodeFor)
{
	t_list	*tmp;

	if (!nodeFrom)
		return ;
	tmp = *nodeFrom;
	*nodeFrom = tmp->next;
	lst_addfront(nodeFor, tmp);
}

void	fx_pa(t_list **a, t_list **b)
{
	fx_push(b, a);
	ft_printf("pa\n");
}

void	fx_pb(t_list **a, t_list **b)
{
	fx_push(a, b);
	ft_printf("pb\n");
}
