/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_exec.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: almarico <almarico@student.42lehavre.fr>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/19 13:48:19 by almarico          #+#    #+#             */
/*   Updated: 2024/02/21 17:05:59 by almarico         ###   ########.fr       */
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
	while (algo->cost.position != 1 && algo->cost.target_pos != 1)
	{
		if ((algo->cost.position <= algo->cost.mediane_sa)
			&& (algo->cost.target_pos <= algo->cost.mediane_sb))
			ft_exec(RAB, get);
		else if ((algo->cost.position > algo->cost.mediane_sa)
			&& (algo->cost.target_pos > algo->cost.mediane_sb))
			ft_exec(RRAB, get);
		if ((algo->cost.position <= algo->cost.mediane_sa)
			&& (algo->cost.target_pos > algo->cost.mediane_sb))
		{
			ft_exec(RA, get);
			ft_exec(RRB, get);
		}
		if ((algo->cost.position > algo->cost.mediane_sa)
			&& (algo->cost.target_pos <= algo->cost.mediane_sb))
		{
			ft_exec(RRA, get);
			ft_exec(RB, get);
		}
	}
	ft_exec(PB, get);
}

void	ft_exec_second_step(t_get *get, t_algo *algo)
{
	algo->cost.target_num = ft_find_sup(get);
	algo->cost.target_pos = ft_find_pos(get->stack_a, algo->cost.target_num);
	ft_find_mediane(get->stack_a, &algo->cost.mediane_sa);
	while (algo->cost.target_pos != 1)
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
			if (algo->cost.target_pos > ft_lstsize_int(get->stack_a))
				algo->cost.target_pos = 1;
		}
	}
	ft_exec(PA, get);
}
