/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_secondary_function.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: almarico <almarico@student.42lehavre.fr>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/19 12:25:41 by almarico          #+#    #+#             */
/*   Updated: 2024/02/27 17:38:50 by almarico         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../Includes/ft_push_swap.h"

int	ft_find_lowest(t_lst *stack)
{
	t_lst	nav;
	int		lowest;

	nav = *stack;
	lowest = nav.content;
	while (nav.next != NULL)
	{
		if (lowest > nav.content)
			lowest = nav.content;
		nav = *nav.next;
	}
	return (lowest);
}

int	ft_find_sup(t_lst *stack, int nb_search)
{
	int		number;
	t_lst	nav;

	nav = *stack;
	number = nb_search;
	while ((nav.next != NULL) && (number > nav.content))
		nav = *nav.next;
	if (number < nav.content)
		number = nav.content;
	else if ((nav.next == NULL) && (number == nb_search))
		return (ft_find_lowest(stack));
	return (number);
}

int	ft_find_target(t_lst *stack, int number)
{
	int		target;
	t_lst	nav;

	nav = *stack;
	target = ft_find_sup(stack, number);
	while (nav.next != NULL)
	{
		if ((nav.content > number) && (nav.content < target))
			target = nav.content;
		nav = *nav.next;
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
