/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_move.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: almarico <almarico@student.42lehavre.fr>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/02 10:18:13 by almarico          #+#    #+#             */
/*   Updated: 2024/03/05 12:24:11 by almarico         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../Includes/ft_push_swap.h"

void	ft_check_move(t_get *get, t_algo *algo)
{
	if (algo->cost.position == get->size_a && algo->cost.tar_pos == get->size_b)
	{
		ft_exec(RRAB, get);
		algo->cost.position = 1;
		algo->cost.tar_pos = 1;
	}
	else if (algo->cost.position == get->size_a)
	{
		ft_exec(RRA, get);
		algo->cost.position = 1;
	}
	else if (algo->cost.tar_pos == get->size_b)
	{
		algo->cost.tar_pos = 1;
		ft_exec(RRB, get);
	}
}

void	ft_move(t_get *get, char *move, int *nb, int sign)
{
	ft_exec(move, get);
	if (sign == 0)
		*nb -= 1;
	else
		*nb += 1;
}

void	ft_move_double(t_get *get, t_algo *algo)
{
	if ((algo->cost.position <= algo->cost.mediane_sa)
		&& (algo->cost.tar_pos <= algo->cost.mediane_sb)
		&& (algo->cost.position != 1 && algo->cost.tar_pos != 1))
	{
		ft_move(get, RAB, &algo->cost.position, 0);
		algo->cost.tar_pos--;
	}
	else if ((algo->cost.position > algo->cost.mediane_sa)
		&& (algo->cost.tar_pos > algo->cost.mediane_sb)
		&& (algo->cost.position != get->size_a
			&& algo->cost.tar_pos != get->size_b))
	{
		ft_move(get, RRAB, &algo->cost.position, 1);
		algo->cost.tar_pos++;
	}
	ft_check_move(get, algo);
}

void	ft_move_simple(t_get *get, t_algo *algo)
{
	while (algo->cost.position != 1 && algo->cost.position != get->size_a)
	{
		if (algo->cost.position <= algo->cost.mediane_sa)
			ft_move(get, RA, &algo->cost.position, 0);
		else if (algo->cost.position > algo->cost.mediane_sa)
			ft_move(get, RRA, &algo->cost.position, 1);
		ft_check_move(get, algo);
	}
	while (algo->cost.tar_pos != 1 && algo->cost.tar_pos != get->size_b)
	{
		if (algo->cost.tar_pos <= algo->cost.mediane_sb)
			ft_move(get, RB, &algo->cost.tar_pos, 0);
		else if (algo->cost.tar_pos > algo->cost.mediane_sb)
			ft_move(get, RRB, &algo->cost.tar_pos, 1);
		ft_check_move(get, algo);
	}
}

void	ft_move_to_pos(t_get *get, t_algo *algo)
{
	while (!((algo->cost.position == 1) && (algo->cost.tar_pos == 1)))
	{
		while ((algo->cost.position <= algo->cost.mediane_sa
				&& algo->cost.tar_pos <= algo->cost.mediane_sb)
			&& !((algo->cost.position == 1) || (algo->cost.tar_pos == 1)))
			ft_move_double(get, algo);
		while ((algo->cost.position > algo->cost.mediane_sa
				&& algo->cost.tar_pos > algo->cost.mediane_sb)
			&& !((algo->cost.position == 1) || (algo->cost.tar_pos == 1)))
			ft_move_double(get, algo);
		ft_move_simple(get, algo);
		ft_check_move(get, algo);
	}
}
