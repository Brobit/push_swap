/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_exec.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: almarico <almarico@student.42lehavre.fr>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/19 13:48:19 by almarico          #+#    #+#             */
/*   Updated: 2024/03/04 10:53:46 by almarico         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../Includes/ft_push_swap.h"

void	ft_exec(char *instruction, t_get *get)
{
	ft_check_instructions(instruction, get);
	ft_write_no_err(instruction);
}

void	ft_exec_first_step(t_get *get, t_algo *algo)
{
	t_lst	nav;
	int		pos;

	nav = *get->stack_a;
	pos = 1;
	while (pos <= 5 && pos < get->size_a)
	{
		ft_cost_calculation(get, algo, &nav);
		nav = *nav.next;
		pos++;
	}
	while (pos < (get->size_a - 5))
	{
		nav = *nav.next;
		pos++;
	}
	while (pos < get->size_a)
	{
		ft_cost_calculation(get, algo, &nav);
		nav = *nav.next;
		pos++;
	}
	ft_move_to_pos(get, algo);
}

void	ft_exec_second_step(t_get *get, t_algo *algo)
{
	while (algo->cost.tar_pos != 1 && algo->cost.tar_pos != get->size_a)
	{
		if (algo->cost.tar_pos <= algo->cost.mediane_sa)
		{
			ft_exec(RA, get);
			algo->cost.tar_pos--;
		}
		else if (algo->cost.tar_pos > algo->cost.mediane_sa)
		{
			ft_exec(RRA, get);
			algo->cost.tar_pos++;
		}
	}
	if (algo->cost.tar_pos == get->size_a)
		ft_exec(RRA, get);
}
