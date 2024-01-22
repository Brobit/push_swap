/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: almarico <almarico@student.42lehavre.fr>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/10 12:16:04 by almarico          #+#    #+#             */
/*   Updated: 2024/01/22 12:25:57 by almarico         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../Includes/ft_push_swap.h"

void	ft_init_tab(t_param *tab)
{
	tab->size = 0;
	tab->array = NULL;
	tab->param = NULL;
}

int	main(int argc, char **argv)
{
	t_param	tab;
	t_get	get;

	argv++;
	argc--;
	if (!ft_error_handler(argc, argv, &tab))
		return (EXIT_FAIL);
	ft_init_tab(&tab);
	if (!ft_convert_to_list(&tab, &get))
		return (EXIT_FAIL);
	return (EXIT_SUCCESS);
}
