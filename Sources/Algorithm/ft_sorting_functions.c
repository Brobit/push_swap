/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sorting_functions.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: almarico <almarico@student.42lehavre.fr>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/19 11:30:24 by almarico          #+#    #+#             */
/*   Updated: 2024/02/21 13:23:19 by almarico         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../Includes/ft_push_swap.h"

void	ft_cost_updater(t_get *get, t_algo *algo)
{
	t_lst	*nav;

	nav = get->stack_a;
	algo->cost.number = get->stack_a->content;
	algo->cost.position = ft_find_pos(get->stack_a, algo->cost.number);
	ft_find_mediane(get->stack_a, &algo->cost.mediane_sa);
	ft_find_mediane(get->stack_b, &algo->cost.mediane_sb);
	algo->cost.target_num = ft_find_target(get->stack_b, algo->cost.number);
	algo->cost.target_pos = ft_find_pos(get->stack_b, algo->cost.target_num);
	while (nav)
	{
		ft_cost_calculation(get, algo);
		nav = nav->next;
	}
}

void	ft_cost_calculation(t_get *get, t_algo *algo)
{
	t_target	tmp;

	tmp.number = get->stack_a->content;
	tmp.position = ft_find_pos(get->stack_a, algo->cost.number);
	ft_find_mediane(get->stack_a, &tmp.mediane_sa);
	ft_find_mediane(get->stack_b, &tmp.mediane_sb);
	tmp.target_num = ft_find_target(get->stack_b, tmp.number);
	tmp.target_pos = ft_find_pos(get->stack_b, tmp.target_num);
	if (tmp.position <= tmp.mediane_sa)
		tmp.mvt_cost += tmp.position;
	else if (tmp.position > tmp.mediane_sa)
		tmp.mvt_cost += ft_lstsize_int(get->stack_a) - tmp.position;
	if (tmp.target_pos <= tmp.mediane_sb)
		tmp.mvt_cost += tmp.target_pos;
	else if (tmp.target_pos > tmp.mediane_sb)
		tmp.mvt_cost += ft_lstsize_int(get->stack_b) - tmp.target_pos;
	if (tmp.mvt_cost < algo->cost.mvt_cost)
		algo->cost = tmp;
}

void	ft_sort_under_three(t_get *get, t_algo *algo)
{
	ft_find_biggest_number(get->stack_a, algo);
	while (algo->sort_a.bnp != ft_lstsize_int(get->stack_a))
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

void	ft_sort_stack(t_get *get, t_algo *algo)
{
	int	i;

	i = 2;
	ft_find_biggest_number(get->stack_a, algo);
	if (algo->sort_a.bnp == 1)
		ft_exec(RA, get);
	while (i-- > 0 && ft_lstsize_int(get->stack_a))
		ft_exec(PB, get);
	while (ft_lstsize_int(get->stack_a) > 3)
	{
		ft_cost_updater(get, algo);
		ft_exec_first_step(get, algo);
	}
	ft_sort_under_three(get, algo);
	while (ft_lstsize_int(get->stack_b) > 0)
		ft_exec_second_step(get, algo);
}
