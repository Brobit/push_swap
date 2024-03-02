/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_exec.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: almarico <almarico@student.42lehavre.fr>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/19 13:48:19 by almarico          #+#    #+#             */
/*   Updated: 2024/03/02 10:19:22 by almarico         ###   ########.fr       */
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

	nav = *get->stack_a;
	while (nav.next != NULL)
	{
		ft_cost_calculation(get, algo, &nav);
		nav = *nav.next;
	}
	ft_cost_calculation(get, algo, &nav);
	ft_move_to_pos(get, algo);
}

void	ft_exec_second_step(t_get *get, t_algo *algo)
{
	int	size;

	size = ft_lstsize_int(get->stack_a);
	while (algo->cost.tar_pos != 1 && algo->cost.tar_pos != size)
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
	if (algo->cost.tar_pos == size)
		ft_exec(RRA, get);
}
