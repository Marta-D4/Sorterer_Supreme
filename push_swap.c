/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: madiaz-e <madiaz-e@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/24 12:50:25 by madiaz-e          #+#    #+#             */
/*   Updated: 2025/11/28 13:00:23 by madiaz-e         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

t_list	ft_checkav(int ac, char **av, t_list *a)
{
	char	**args;
	int		i;
	int		j;

	i = 1;
	while (i < ac)
	{
		args = ft_split(av[i], ' ');
		if (!args)
			return ;
		j = 0;
		while (args[j])
		{
			/*checknum
			atol
			fill stack
			liberar mem*/
			j++;
		}
		i++;
	}
}

int	main(int ac, char **av)
{
	t_list	*a;
	t_list	*b;

	a = NULL;
	b = NULL;
	if (ac <= 1)
		return ;
	else
		ft_checkav(ac, av, &a);
}
