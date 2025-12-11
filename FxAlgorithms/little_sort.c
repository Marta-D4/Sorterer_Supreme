/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   little_sort.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: madiaz-e <madiaz-e@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/10 12:07:10 by madiaz-e          #+#    #+#             */
/*   Updated: 2025/12/11 11:55:27 by madiaz-e         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

t_list	*lst_find_biggest(t_list *lst)
{
	t_list	*max;

	max = lst;
	while (lst)
	{
		if (lst->value > max->value)
			max = lst;
		lst = lst->next;
	}
	return (max);
}

t_list	*lst_find_lowest(t_list *lst)
{
	t_list	*min;

	min = lst;
	while (lst)
	{
		if (lst->value < min->value)
			min = lst;
		lst = lst->next;
	}
	return (min);
}

void	ft_little_sort(t_list **a)
{
	t_list	*biggest;

	biggest = lst_find_biggest(*a);
	if (biggest == *a)
		fx_ra(a);
	else if (biggest == (*a)->next)
		fx_rra(a);
	if ((*a)->value > (*a)->next->value)
		fx_sa(a);
}
