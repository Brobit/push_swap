/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sorting_functions.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: almarico <almarico@student.42lehavre.fr>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/19 11:30:24 by almarico          #+#    #+#             */
/*   Updated: 2024/02/27 17:06:45 by almarico         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../Includes/ft_push_swap.h"

// void	ft_cost_updater(t_get *get, t_algo *algo)
// {
// 	t_lst	nav;
// 	int		size;
//
// 	nav = *get->stack_a;
// 	algo->cost.number = get->stack_a->content;
// 	algo->cost.position = ft_find_pos(get->stack_a, algo->cost.number);
// 	ft_find_mediane(get->stack_a, &algo->cost.mediane_sa);
// 	ft_find_mediane(get->stack_b, &algo->cost.mediane_sb);
// 	algo->cost.target_num = ft_find_target(get->stack_b, algo->cost.number);
// 	algo->cost.target_pos = ft_find_pos(get->stack_b, algo->cost.target_num);
// 	algo->cost.mvt_cost = algo->cost.position + algo->cost.target_pos;
// 	size = ft_lstsize_int(get->stack_a);
// 	while (size > 0 && nav.next != NULL)
// 	{
// 		ft_cost_calculation(get, algo, &nav);
// 		nav = *nav.next;
// 		size--;
// 	}
// }
//
// void	ft_cost_calculation(t_get *get, t_algo *algo, t_lst *nav)
// {
// 	t_target	tmp;
//
// 	tmp.number = nav->content;
// 	tmp.position = ft_find_pos(get->stack_a, tmp.number);
// 	ft_find_mediane(get->stack_a, &tmp.mediane_sa);
// 	ft_find_mediane(get->stack_b, &tmp.mediane_sb);
// 	tmp.target_num = ft_find_target(get->stack_b, tmp.number);
// 	tmp.target_pos = ft_find_pos(get->stack_b, tmp.target_num);
// 	if (tmp.position <= tmp.mediane_sa)
// 		tmp.mvt_cost = tmp.position;
// 	else if (tmp.position > tmp.mediane_sa)
// 		tmp.mvt_cost = ft_lstsize_int(get->stack_a) - tmp.position;
// 	if (tmp.target_pos <= tmp.mediane_sb)
// 		tmp.mvt_cost += tmp.target_pos;
// 	else if (tmp.target_pos > tmp.mediane_sb)
// 		tmp.mvt_cost += ft_lstsize_int(get->stack_b) - tmp.target_pos;
// 	if (tmp.mvt_cost < algo->cost.mvt_cost)
// 		algo->cost = tmp;
// }

void	ft_push_max_to_bottom(t_get *get, t_algo *algo)
{
	int	size;

	size = ft_lstsize_int(get->stack_a);
	ft_find_biggest_number(get->stack_a, algo);
	ft_find_mediane(get->stack_a, &algo->sort_a.mediane);
	while (algo->sort_a.bnp != size)
	{
		if (algo->sort_a.bnp <= algo->sort_a.mediane)
		{
			ft_exec(RA, get);
			algo->sort_a.bnp--;
			if (algo->sort_a.bnp < 1)
				algo->sort_a.bnp = size;
		}
		if (algo->sort_a.bnp > algo->sort_a.mediane)
		{
			ft_exec(RRA, get);
			algo->sort_a.bnp++;
		}
	}
}

void	ft_cost_updater(t_get *get, t_algo *algo)
{
	algo->cost.number = get->stack_b->content;
	algo->cost.position = ft_find_pos(get->stack_b, algo->cost.number);
	algo->cost.target_num = ft_find_target(get->stack_a, algo->cost.number);
	algo->cost.target_pos = ft_find_pos(get->stack_a, algo->cost.target_num);
	ft_find_mediane(get->stack_a, &algo->cost.mediane_sa);
	ft_find_mediane(get->stack_b, &algo->cost.mediane_sb);
}

void	ft_cost_calculation(t_get *get, t_algo *algo, t_lst *nav)
{
	t_target	tmp;

	tmp.number = nav->content;
	tmp.position = ft_find_pos(get->stack_b, tmp.number);
	ft_find_mediane(get->stack_a, &tmp.mediane_sa);
	ft_find_mediane(get->stack_b, &tmp.mediane_sb);
	tmp.target_num = ft_find_target(get->stack_a, tmp.number);
	tmp.target_pos = ft_find_pos(get->stack_a, tmp.target_num);
	if (tmp.position <= tmp.mediane_sb)
		tmp.mvt_cost = tmp.position;
	else if (tmp.position > tmp.mediane_sb)
		tmp.mvt_cost = ft_lstsize_int(get->stack_b) - tmp.position;
	if (tmp.target_pos <= tmp.mediane_sa)
		tmp.mvt_cost += tmp.target_pos;
	else if (tmp.target_pos > tmp.mediane_sa)
		tmp.mvt_cost += ft_lstsize_int(get->stack_a) - tmp.target_pos;
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
	ft_find_biggest_number(get->stack_a, algo);
	if (algo->sort_a.bnp == 1)
		ft_exec(RA, get);
	while (ft_lstsize_int(get->stack_a) > 3)
		ft_exec(PB, get);
	ft_sort_under_three(get, algo);
	while (ft_lstsize_int(get->stack_b) > 0)
	{
		ft_init_t_target(&algo->cost);
		ft_cost_updater(get, algo);
		ft_exec_first_step(get, algo);
		ft_exec(PA, get);
	}
	ft_push_max_to_bottom(get, algo);
	//	ft_exec_second_step(get, algo);
}
