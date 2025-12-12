/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: madiaz-e <madiaz-e@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/04 11:33:15 by madiaz-e          #+#    #+#             */
/*   Updated: 2025/12/12 10:53:33 by madiaz-e         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	fx_swap(t_list **lst)
{
	t_list	*fnode;
	t_list	*snode;

	if (!lst || !*lst || !(*lst)->next)
		return ;
	fnode = *lst;
	snode = fnode->next;
	fnode->next = snode->next;
	snode->next = fnode;
	*lst = snode;
}

void	fx_sa(t_list **a)
{
	fx_swap(a);
	ft_printf("sa\n");
}

void	fx_sb(t_list **b)
{
	fx_swap(b);
	ft_printf("sb\n");
}

void	fx_ss(t_list **a, t_list **b)
{
	fx_swap(a);
	fx_swap(b);
	ft_printf("ss\n");
}
