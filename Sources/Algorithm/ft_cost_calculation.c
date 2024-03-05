/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_cost_calculation.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: almarico <almarico@student.42lehavre.fr>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/28 12:05:00 by almarico          #+#    #+#             */
/*   Updated: 2024/03/04 10:24:33 by almarico         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../Includes/ft_push_swap.h"

int	ft_find_pos(t_lst *stack, int number)
{
	int		i;
	t_lst	*nav;

	i = 1;
	nav = stack;
	while (nav && (nav->content != number))
	{
		nav = nav->next;
		i++;
	}
	return (i);
}

static void	ft_check_cost(t_get *get, t_target *tmp, t_algo *algo)
{
	tmp->position = ft_find_pos(get->stack_a, tmp->number);
	tmp->tar_num = ft_find_target(get->stack_b, tmp->number);
	tmp->tar_pos = ft_find_pos(get->stack_b, tmp->tar_num);
	if ((tmp->position + tmp->tar_pos) < tmp->mvt_cost)
	{
		tmp->mvt_cost = tmp->position + tmp->tar_pos;
		algo->cost.number = tmp->number;
		algo->cost.position = tmp->position;
		algo->cost.tar_num = tmp->tar_num;
		algo->cost.tar_pos = tmp->tar_pos;
		algo->cost.mvt_cost = tmp->mvt_cost;
	}
}

void	ft_cost_calculation(t_get *get, t_algo *algo, t_lst *nav)
{
	t_target	tmp;

	if (algo->cost.number == 0)
	{
		algo->cost.number = nav->content;
		algo->cost.position = ft_find_pos(get->stack_a, algo->cost.number);
		algo->cost.tar_num = ft_find_target(get->stack_b, algo->cost.number);
		algo->cost.tar_pos = ft_find_pos(get->stack_b, algo->cost.tar_num);
		algo->cost.mvt_cost = algo->cost.position + algo->cost.tar_pos;
	}
	tmp = algo->cost;
	while (nav->next != NULL)
	{
		tmp.number = nav->content;
		ft_check_cost(get, &tmp, algo);
		nav = nav->next;
	}
	tmp.number = nav->content;
	ft_check_cost(get, &tmp, algo);
	ft_find_mediane(get->stack_a, &algo->cost.mediane_sa);
	ft_find_mediane(get->stack_b, &algo->cost.mediane_sb);
}
