/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   little_sort.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: madiaz-e <madiaz-e@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/10 12:07:10 by madiaz-e          #+#    #+#             */
/*   Updated: 2025/12/10 13:22:34 by madiaz-e         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

t_list	*lst_find_biggest(t_list *lst)
{
	t_list	*max;

	if (!lst)
		return ;
	max = lst;
	while (lst)
	{
		if (lst->value > max->value)
			max = lst;
		lst = lst->next;
	}
	return (max);
}

void	ft_little_sort(t_list **a)
{
	t_list	*biggest;

	biggest = lst_find_biggest(*a);
	if (biggest == *a)
		fx_ra(a);
	else if (biggest == (*a)->next)
		fx_rra(a);
	if((*a)->value > (*a)->next->value)
		fx_sa(a);
}
