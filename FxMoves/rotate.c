/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotate.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: madiaz-e <madiaz-e@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/05 11:08:09 by madiaz-e          #+#    #+#             */
/*   Updated: 2025/12/05 12:30:31 by madiaz-e         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	fx_rotate(t_list **lst)
{
	t_list	*tmp;

	if (!lst || !*lst || !(*lst)->next)
		return ;
	tmp = *lst;
	*lst = tmp->next;
	tmp->next = NULL;
	lst_addback(lst, tmp);
}

void	fx_ra(t_list **a)
{
	fx_rotate(a);
	ft_printf("ra\n");
}

void	fx_rb(t_list **b)
{
	fx_rotate(b);
	ft_printf("rb\n");
}

void	fx_rr(t_list **a, t_list **b)
{
	fx_rotate(a);
	fx_rotate(b);
	ft_printf("rr\n");
}
