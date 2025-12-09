/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: madiaz-e <madiaz-e@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/24 12:50:25 by madiaz-e          #+#    #+#             */
/*   Updated: 2025/12/09 12:44:50 by madiaz-e         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

t_list	ft_checkav(int ac, char **av, t_list *a)
{
	char	**args;
	int		i;
	int		j;
	long	num;

	i = 1;
	while (i < ac)
	{
		args = ft_split(av[i], ' ');
		j = 0;
		while (args[j])
		{
			if (!ft_isnumvalid(args[j]))
				ft_freeall(args[j], a);
			num = ft_atol(args[j]);
			if (!ft_isnumlimit(num))
				ft_freeall(args[j], a);
			lst_addback(a, lst_new((int)num));
			j++;
		}
		i++;
		ft_cleararray(args);
	}
	if (ft_isnumrepeat(a))
		ft_freeall(args, a);
}

int	main(int ac, char **av)
{
	t_list	*a;
	t_list	*b;
	int		lsize;

	if (ac <= 1)
		return ;
	a = NULL;
	b = NULL;
	ft_checkav(ac, av, &a);
	lsize = lst_size(a);
	if (!ft_islstsorted(a))
	{
		if (lsize == 2)
			fx_sa(a);
	}
}
