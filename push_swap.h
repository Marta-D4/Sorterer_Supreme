/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: madiaz-e <madiaz-e@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/26 11:51:41 by madiaz-e          #+#    #+#             */
/*   Updated: 2025/12/09 12:19:29 by madiaz-e         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// stack.h
#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include <stdio.h>
# include <stdlib.h>
# include <limits.h>
# include "FxUtils/libft_ps.h"

//LIST
typedef struct s_list
{
	void			*value;
	struct s_list	*next;
}	t_list;
t_list		*lst_new(void *value);
int			lst_size(t_list *lst);
t_list		*lst_last(t_list *lst);
void		lst_addback(t_list **lst, t_list *newnode);
void		lst_addfront(t_list **lst, t_list *newnode);
//VALIDATION
int			ft_isnumvalid(char *num);
int			ft_isnumlimit(long num);
int			ft_isnumrepeat(t_list **lst);
int			ft_islstsorted(t_list *node);
//CLEAR
void		ft_lstclear(t_list **lst, void (*del)(void *));
void		ft_cleararray(char **str);
void		ft_freeall(char **val, t_list **lst);
//MOVES
void		fx_swap(t_list **lst);
void		fx_sa(t_list **a);
void		fx_sb(t_list **b);
void		fx_ss(t_list **a, t_list **b);
void		fx_push(t_list **nodeFrom, t_list **nodeFor);
void		fx_pa(t_list **a, t_list **b);
void		fx_pb(t_list **a, t_list **b);
void		fx_rotate(t_list **lst);
void		fx_ra(t_list **a);
void		fx_rb(t_list **b);
void		fx_rr(t_list **a, t_list **b);
void		fx_reverse_rotate(t_list **lst);
void		fx_rra(t_list **a);
void		fx_rrb(t_list **b);
void		fx_rrr(t_list **a, t_list **b);

#endif
