/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_error_handler.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: almarico <almarico@student.42lehavre.fr>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/10 12:51:29 by almarico          #+#    #+#             */
/*   Updated: 2024/02/18 09:57:20 by almarico         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../Includes/ft_push_swap.h"
#include <stdio.h>

void	ft_debug(t_get *get)
{
	t_lst	*tmp;

	printf("stack_a : ");
	tmp = get->stack_a;
	while (tmp != NULL)
	{
		printf("%d->", tmp->content);
		tmp = tmp->next;
	}
	printf("\n");
	printf("stack_b : ");
	tmp = get->stack_b;
	while (tmp != NULL)
	{
		printf("%d->", tmp->content);
		tmp = tmp->next;
	}
	printf("\n");
}

int	ft_write_err(char *err_msg)
{
	write(STDERR, err_msg, ft_strlen(err_msg));
	return (FUNCTION_FAIL);
}

int	ft_write_no_err(char *nice_msg)
{
	write(STDOUT, nice_msg, ft_strlen(nice_msg));
	return (FUNCTION_SUCCESS);
}

int	ft_error_handler(int argc, char **argv, t_param *tab)
{
	if (argc == 0)
		return (ft_write_err(ERR_MSG_NEA));
	ft_convert_argv_to_str(argv, tab);
	if (!ft_check_tab(tab))
		return (ft_write_err(ERR_MSG_GENERIC));
	if (!ft_convert_to_int(tab))
		return (ft_write_err(ERR_MSG_GENERIC));
	if (!ft_check_duplication(tab))
		return (ft_write_err(ERR_MSG_GENERIC));
	return (ft_write_no_err(OK_MSG));
}
