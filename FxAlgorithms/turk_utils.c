/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   turk_utils.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: madiaz-e <madiaz-e@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/11 11:23:17 by madiaz-e          #+#    #+#             */
/*   Updated: 2025/12/11 12:58:02 by madiaz-e         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	moves_cost(t_list *lst)
{
	int	size_lst;
	int	i;

	size_lst = lst_size(lst);
	i = 0;
	while (lst)
	{
		if (i <= size_lst / 2) //Si el nodo esta en la primera mitad
		{
			lst->cost_top = i; //Cuantos pasos desde arriba para llegar al nodo
			lst->below_median = 0;
		}
		else //Si esta en la segunda mitad
		{
			lst->cost_top = size_lst - i; //Cuantos pasos desde abajo
			lst->below_median = 1;
		}
		lst = lst->next;
		i++;
	}
}

int	get_target(t_list *a, t_list *b) //valor de a donde debe insertarse el de b para que a siga ordenada
{
	int		target;
	t_list	*biggest;

	biggest = lst_find_biggest(a); //target=lst_find_biggest(a)->value;
	target = biggest->value;
	while (a) //recorre a buscando el target 
	{
		if (a->value > b->value && a->value < target) //nums de a mayores que b, pero sin ser + que el mayor
			target = a->value;
		a = a->next;
	}
	return (target);
}

void	target_cost(t_list *a, t_list *b)
{
	t_list	*save;
	int		i;

	while (b) //por cada nodo de b
	{
		save = a;
		i = 0;
		while (save->value != get_target(a, b)) 
		{//avanza por a hasta encontrar un valor que coincida con get_target, i será la pos en a
			i++;
			save = save->next;
		}
		if (i <= lst_size(a) / 2)
		{//si esta en la primera mitad, cuantos moves requiere para subir el target
			b->target_cost_top = i;
			b->target_below_median = 0;
		}
		else
		{//o si esta en la segunda
			b->target_cost_top = lst_size(a) - i;
			b->target_below_median = 1;
		}
		b = b->next;
	}
	
}
/*Para cada nodo de b calcula: moves para llevar su target al tope de a
(target_cost_top) y si eso target está en la primera o segunda mitad de a
(target_below_median)*/

void	total_cost(t_list **b)
{
	t_list	*tmp;

	tmp = *b;
	while (tmp)
	{
		if (tmp->below_median == tmp->target_below_median)
		{//ambos en la mitad 1(ra+rb->rr) ambos en la 2(rra+rrb->rrr)
			if (tmp->target_cost_top > tmp->cost_top) //se toma el mayor de los costes
				tmp->total_cost = tmp->target_cost_top;
			else
				tmp->total_cost = tmp->cost_top;
		}
		else
			tmp->total_cost = tmp->cost_top + tmp->target_cost_top;
		tmp = tmp->next;
	}
}
/*para cada nodo de b calcula el coste total de: mover el nodo de b a su cima,
mover su target en a a la cima de a y luego ejecuta pa correspondiente*/
