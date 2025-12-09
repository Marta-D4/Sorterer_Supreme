/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   reverse_rotate.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: madiaz-e <madiaz-e@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/05 12:44:54 by madiaz-e          #+#    #+#             */
/*   Updated: 2025/12/09 11:14:52 by madiaz-e         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	fx_reverse_rotate(t_list **lst)
{
	t_list	*last;
	t_list	*slast;

	if (!lst || !*lst || !(*lst)->next)
		return ;
	slast = *lst;
	while (slast->next && slast->next->next)
		slast = slast->next;
	last = slast->next;
	slast->next = NULL;
	lst_addfront(lst, last);
}

void	fx_rra(t_list **a)
{
	fx_reverse_rotate(a);
	ft_printf("rra\n");
}

void	fx_rrb(t_list **b)
{
	fx_reverse_rotate(b);
	ft_printf("rrb\n");
}

void	fx_rrr(t_list **a, t_list **b)
{
	fx_reverse_rotate(a);
	fx_reverse_rotate(b);
	ft_printf("rrr\n");
}
