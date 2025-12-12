/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   little_sort.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: madiaz-e <madiaz-e@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/10 12:07:10 by madiaz-e          #+#    #+#             */
/*   Updated: 2025/12/12 12:57:26 by madiaz-e         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

int	lst_find_biggest(t_list *lst)
{
	int	max;

	max = lst->value;
	while (lst)
	{
		if (lst->value > max)
			max = lst->value;
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

void	ft_little_sort(t_list **lst)
{
	int	biggest;

	biggest = lst_find_biggest(*lst);
	if (biggest == (*lst)->value)
		fx_ra(lst);
	else if (biggest == (*lst)->next->value)
		fx_rra(lst);
	if ((*lst)->value > (*lst)->next->value)
		fx_sa(lst);
}
