/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checkav_val.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: madiaz-e <madiaz-e@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/01 11:48:34 by madiaz-e          #+#    #+#             */
/*   Updated: 2025/12/12 12:27:49 by madiaz-e         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

int	ft_isnumvalid(char *num)
{
	int	i;

	i = 0;
	if (num[i] == '+' || num[i] == '-')
		i++;
	if (!num)
		return (0);
	while (num[i])
	{
		if (num[i] < '0' || num[i] > '9')
			return (0);
		i++;
	}
	return (1);
}

int	ft_isnumlimit(long num)
{
	if (num < INT_MIN || num > INT_MAX)
		return (0);
	return (1);
}

int	ft_isnumrepeat(t_list **lst)
{
	t_list	*node;
	t_list	*tmp;

	tmp = *lst;
	while (tmp && tmp->next)
	{
		node = tmp->next;
		while (node)
		{
			if (tmp->value == node->value)
				return (1);
			node = node->next;
		}
		tmp = tmp->next;
	}
	return (0);
}

int	ft_islstsorted(t_list *node)
{
	while (node && node->next)
	{
		if (node->value > node->next->value)
			return (0);
		node = node->next;
	}
	return (1);
}
