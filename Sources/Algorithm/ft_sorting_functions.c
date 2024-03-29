/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sorting_functions.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: almarico <almarico@student.42lehavre.fr>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/19 11:30:24 by almarico          #+#    #+#             */
/*   Updated: 2024/03/04 12:14:50 by almarico         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../Includes/ft_push_swap.h"

void	ft_push_max_to_bottom(t_get *get, t_algo *algo)
{
	ft_find_biggest_number(get->stack_a, algo);
	ft_find_mediane(get->stack_a, &algo->sort_a.mediane);
	while (algo->sort_a.bnp != get->size_a)
	{
		if (algo->sort_a.bnp <= algo->sort_a.mediane)
		{
			ft_exec(RA, get);
			algo->sort_a.bnp--;
			if (algo->sort_a.bnp < 1)
				algo->sort_a.bnp = get->size_a;
		}
		else
		{
			ft_exec(RRA, get);
			algo->sort_a.bnp++;
		}
	}
}

void	ft_cost_updater(t_lst *stack, t_algo *algo, int number)
{
	algo->cost.number = number;
	algo->cost.position = 1;
	algo->cost.tar_num = ft_find_target(stack, algo->cost.number);
	algo->cost.tar_pos = ft_find_pos(stack, algo->cost.tar_num);
}

void	ft_sort_under_three(t_get *get, t_algo *algo)
{
	ft_find_biggest_number(get->stack_a, algo);
	while (algo->sort_a.bnp != get->size_a)
	{
		if (algo->sort_a.bnp < algo->sort_a.mediane)
			ft_exec(RRA, get);
		else if (algo->sort_a.bnp >= algo->sort_a.mediane)
			ft_exec(RA, get);
		ft_find_biggest_number(get->stack_a, algo);
	}
	if (get->stack_a->content > get->stack_a->next->content)
		ft_exec(SA, get);
}

void	ft_push_a_to_b(t_get *get, t_algo *algo)
{
	int	i;

	i = 2;
	while (i-- > 0 && get->size_a > 3)
	{
		ft_exec(PB, get);
		get->size_a--;
		get->size_b++;
	}
	while (get->size_a > 3)
	{
		ft_init_t_target(&algo->cost);
		ft_exec_first_step(get, algo);
		ft_exec(PB, get);
		get->size_a--;
		get->size_b++;
	}
}

void	ft_sort_stack(t_get *get, t_algo *algo)
{
	ft_find_biggest_number(get->stack_a, algo);
	if (algo->sort_a.bnp == 1)
		ft_exec(RA, get);
	ft_push_a_to_b(get, algo);
	ft_sort_under_three(get, algo);
	while (ft_lstsize_int(get->stack_b) > 0)
	{
		ft_init_t_target(&algo->cost);
		ft_find_mediane(get->stack_a, &algo->cost.mediane_sa);
		ft_cost_updater(get->stack_a, algo, get->stack_b->content);
		ft_exec_second_step(get, algo);
		ft_exec(PA, get);
		get->size_b--;
		get->size_a++;
	}
	ft_push_max_to_bottom(get, algo);
}
