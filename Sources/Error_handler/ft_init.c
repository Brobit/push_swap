/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_init.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: almarico <almarico@student.42lehavre.fr>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/20 19:24:37 by almarico          #+#    #+#             */
/*   Updated: 2024/02/20 19:26:18 by almarico         ###   ########.fr       */
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

int	ft_init_t_sort(t_sort_a *sort_a)
{
	sort_a = malloc(sizeof(t_sort_a));
	if (!sort_a)
		return (FUNCTION_FAIL);
	sort_a->mediane = 0;
	sort_a->bnp = 0;
	sort_a->biggest_num = 0;
	return (FUNCTION_SUCCESS);
}

int	ft_init_t_target(t_target *cost)
{
	cost = malloc(sizeof(t_target));
	if (!cost)
		return (FUNCTION_FAIL);
	cost->number = 0;
	cost->mvt_cost = 0;
	cost->position = 0;
	cost->target_num = 0;
	cost->target_pos = 0;
	cost->mediane_sa = 0;
	cost->mediane_sb = 0;
	return (FUNCTION_SUCCESS);
}

int	ft_init_algo(t_algo *algo)
{
	algo = malloc(sizeof(t_algo));
	if (!algo)
		return (FUNCTION_FAIL);
	return (FUNCTION_SUCCESS);
}
