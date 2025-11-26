/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   list_utils.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: madiaz-e <madiaz-e@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/26 12:37:57 by madiaz-e          #+#    #+#             */
/*   Updated: 2025/11/26 13:08:06 by madiaz-e         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

t_list	*lst_new(void *value)
{
	t_list	*elem;

	elem = malloc(sizeof(t_list));
	if (!elem)
		return (NULL);
	elem->value = value;
	elem->next = NULL;
	return (elem);
}

int	lst_size(t_list *lst)
{
	int	i;

	i = 0;
	while (lst)
	{
		i++;
		lst = lst->next;
	}
	return (i);
}

t_list	*lst_last(t_list *lst)
{
	if (!lst)
		return (NULL);
	while (lst->next)
		lst = lst->next;
	return (lst);
}

void	lst_addback(t_list **lst, t_list *newnode)
{
	t_list	*last;

	if (!lst || !newnode)
		return ;
	if (!*lst)
	{
		*lst = newnode;
		return ;
	}
	last = lst_last(*lst);
	last->next = newnode;
}
