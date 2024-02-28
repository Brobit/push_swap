/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_exec.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: almarico <almarico@student.42lehavre.fr>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/19 13:48:19 by almarico          #+#    #+#             */
/*   Updated: 2024/02/28 05:59:00 by almarico         ###   ########.fr       */
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
	int	size;

	size = ft_lstsize_int(get->stack_b);
	while (algo->cost.target_pos != 1 && algo->cost.target_pos != size)
	{
		if (algo->cost.target_pos <= algo->cost.mediane_sb)
		{
			ft_exec(RB, get);
			algo->cost.target_pos--;
		}
		else if (algo->cost.target_pos > algo->cost.mediane_sb)
		{
			ft_exec(RRB, get);
			algo->cost.target_pos++;
		}
	}
	if (algo->cost.target_pos == size)
		ft_exec(RRB, get);
}

void	ft_exec_second_step(t_get *get, t_algo *algo)
{
	int	size;

	size = ft_lstsize_int(get->stack_a);
	while (algo->cost.target_pos != 1 && algo->cost.target_pos != size)
	{
		if (algo->cost.target_pos <= algo->cost.mediane_sa)
		{
			ft_exec(RA, get);
			algo->cost.target_pos--;
		}
		else if (algo->cost.target_pos > algo->cost.mediane_sa)
		{
			ft_exec(RRA, get);
			algo->cost.target_pos++;
		}
	}
	if (algo->cost.target_pos == size)
		ft_exec(RRA, get);
}
