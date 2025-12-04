/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: madiaz-e <madiaz-e@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/04 11:33:15 by madiaz-e          #+#    #+#             */
/*   Updated: 2025/12/04 11:51:51 by madiaz-e         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	fx_swap(t_list **lst)
{
	t_list	*fnode;
	t_list	*snode;

	if (!lst || !*lst)
		return ;
	fnode = *lst;
	snode = fnode->next;
	fnode->next = snode->next;
	snode->next = fnode;
	*lst = snode;
}
/* lst = A->B->C->D  fnode = *lst; snode = B->C->D
fnode->next = snode->next  fnode B=C->D fnode=A->C->D
snode->next = fnode  snode C=A->C->D  snode=B->A->C->D
*lst = B->A->C->D
*/

void	fx_sa(t_list **a)
{
	ft_swap(a);
	ft_printf("sa\n");
}

void	fx_sb(t_list **b)
{
	ft_swap(b);
	ft_printf("sb\n");
}

void	fx_ss(t_list **a, t_list **b)
{
	ft_swap(a);
	ft_swap(b);
	ft_printf("ss\n");
}
