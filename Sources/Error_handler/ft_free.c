/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_free.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: almarico <almarico@student.42lehavre.fr>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/03 11:18:40 by almarico          #+#    #+#             */
/*   Updated: 2024/03/03 22:57:44 by almarico         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../Includes/ft_push_swap.h"

void	ft_free_list(t_lst *stack_a)
{
	t_lst	*next;

	while (stack_a != NULL)
	{
		next = stack_a->next;
		free(stack_a);
		stack_a = next;
	}
	stack_a = NULL;
}

void	ft_free_tab(t_param *tab)
{
	int	i;

	i = 0;
	while (tab->param[i])
		free(tab->param[i++]);
	free(tab->param);
	tab->param = NULL;
	free(tab->array);
	tab->array = NULL;
}

void	ft_free_argv(char **argv)
{
	int	i;

	i = 0;
	while (argv[i])
	{
		free(argv[i]);
		i++;
	}
	argv = NULL;
}
