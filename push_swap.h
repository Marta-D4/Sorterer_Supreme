/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: madiaz-e <madiaz-e@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/26 11:51:41 by madiaz-e          #+#    #+#             */
/*   Updated: 2025/12/02 12:08:30 by madiaz-e         ###   ########.fr       */
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
//VALIDATION
int			ft_isnumvalid(char *num);
int			ft_isnumlimit(long num);
//CLEAR
void		ft_lstclear(t_list **lst, void (*del)(void *));
void		ft_cleararray(char **str);
void		ft_freeall(char **val, t_list **lst);

#endif
