/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checker.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: almarico <almarico@student.42lehavre.fr>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/21 15:23:14 by almarico          #+#    #+#             */
/*   Updated: 2024/02/21 13:27:28 by almarico         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../Includes/checker.h"

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
	ft_init_get(&get);
	if (!ft_error_handler(argc, argv, &tab))
		return (EXIT_FAIL);
	if (!ft_convert_to_list(&tab, &get))
		return (EXIT_FAIL);
	if (!ft_stdin_listener(&the, &get))
		return (EXIT_FAIL);
	if (!ft_check_list_is_sorted(&get))
	{
		ft_write_err(ERR_LIST_NOT_SORTED);
		ft_write_no_err("KO\n");
		return (EXIT_FAIL);
	}
	else
		ft_write_no_err("OK\n");
	return (EXIT_SUCCESS);
}
