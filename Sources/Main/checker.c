/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checker.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: almarico <almarico@student.42lehavre.fr>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/21 15:23:14 by almarico          #+#    #+#             */
/*   Updated: 2024/01/22 12:32:38 by almarico         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../Includes/checker.h"

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
	t_stdin	the;

	argv++;
	argc--;
	if (argc == 0)
		return (EXIT_FAIL);
	ft_init_tab(&tab);
	ft_stdin_listener(&the);
	if (!ft_error_handler(argc, argv, &tab))
		return (EXIT_FAIL);
	if (!ft_convert_to_list(&tab, &get))
		return (EXIT_FAIL);
	return (EXIT_SUCCESS);
}
