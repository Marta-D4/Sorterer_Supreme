/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: madiaz-e <madiaz-e@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/24 12:50:25 by madiaz-e          #+#    #+#             */
/*   Updated: 2025/11/26 13:57:10 by madiaz-e         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

/*t_list	ft_lstfill(int	*array, t_list *lst, int type)
{
	while (array[type])
	{

	}
}*/

t_list	ft_checkav(int ac, char **av, t_list *a)
{
	char	**args;
	int		i;
	int		j;

	i = 1;
	if (ac <= 1)
		return ;
	else
	{
		while (i < ac)
			{
				//split
				/*args = ft_split(av[i], ' ');*/ 
				j = 0;
				while (args[j])
					{
						//checknum - si es valido pasarlo por atoi o atol / si no liberarlo
						//tmp = ft_atoi(args[j])
						//fill stack con addback cast a int
						j++;
					}
				i++;
			}
		//check algun num repe
	}
}

int	main(int ac, char **av)
{
	t_list	*a;
	t_list	*b;

	a = NULL;
	b = NULL;
	ft_checkav(ac, av, &a);
}
