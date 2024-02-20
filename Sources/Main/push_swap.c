/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: almarico <almarico@student.42lehavre.fr>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/10 12:16:04 by almarico          #+#    #+#             */
/*   Updated: 2024/02/20 09:49:24 by almarico         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../Includes/ft_push_swap.h"

void	ft_init_tab(t_param *tab)
{
	tab->size = 0;
	tab->array = NULL;
	tab->param = NULL;
}

void	ft_init_get(t_get *get)
{
	get->stack_a = NULL;
	get->stack_b = NULL;
}

void	ft_init_t_sort(t_sort_a *sort_a)
{
	sort_a->mediane = 0;
	sort_a->bnp = 0;
	sort_a->biggest_num = 0;
}

void	ft_init_t_target(t_target *cost)
{
	cost->number = 0;
	cost->mvt_cost = 0;
	cost->position = 0;
	cost->target_num = 0;
	cost->target_pos = 0;
	cost->mediane_sa = 0;
	cost->mediane_sb = 0;
}

int	main(int argc, char **argv)
{
	t_param		tab;
	t_get		get;
	t_algo		algo;

	argv++;
	argc--;
	ft_init_tab(&tab);
	ft_init_get(&get);
	ft_init_t_sort(algo.sort_a);
	ft_init_t_target(algo.cost);
	if (!ft_error_handler(argc, argv, &tab))
		return (EXIT_FAIL);
	if (!ft_convert_to_list(&tab, &get))
		return (EXIT_FAIL);
	ft_algorithm(&get, &algo);
	return (EXIT_SUCCESS);
}
