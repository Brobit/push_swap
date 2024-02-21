/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_secondary_function.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: almarico <almarico@student.42lehavre.fr>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/19 12:25:41 by almarico          #+#    #+#             */
/*   Updated: 2024/02/21 13:25:32 by almarico         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../Includes/ft_push_swap.h"

int	ft_find_sup(t_get *get)
{
	int		number;
	t_lst	*nav;

	nav = get->stack_a;
	number = get->stack_b->content;
	while (nav && number > nav->content)
		nav = nav->next;
	number = nav->content;
	return (number);
}

int	ft_find_target(t_lst *stack, int number)
{
	int		target;
	int		diff;
	t_lst	*nav;

	nav = stack;
	diff = number;
	while (nav)
	{
		if ((number - nav->content) < diff)
		{
			diff = number - nav->content;
			target = nav->content;
		}
		nav = nav->next;
	}
	return (target);
}

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

void	ft_find_mediane(t_lst *stack, int *mediane)
{
	int	size;

	size = ft_lstsize_int(stack);
	if ((size % 2) != 0)
		size++;
	*mediane = (size / 2);
}

void	ft_find_biggest_number(t_lst *stack, t_algo *algo)
{
	t_lst	*nav;

	nav = stack;
	algo->sort_a.biggest_num = stack->content;
	algo->sort_a.bnp = ft_find_pos(stack, algo->sort_a.biggest_num);
	while (nav)
	{
		if (algo->sort_a.biggest_num < nav->content)
		{
			algo->sort_a.biggest_num = nav->content;
			algo->sort_a.bnp = ft_find_pos(stack, algo->sort_a.biggest_num);
		}
		nav = nav->next;
	}
}
