/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: almarico <almarico@student.42lehavre.fr>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/10 12:16:04 by almarico          #+#    #+#             */
/*   Updated: 2024/02/20 19:27:15 by almarico         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../Includes/ft_push_swap.h"

int	main(int argc, char **argv)
{
	t_param		tab;
	t_get		get;
	t_algo		algo;

	argv++;
	argc--;
	ft_init_tab(&tab);
	ft_init_get(&get);
	if (ft_init_algo(&algo) == FUNCTION_FAIL
		|| ft_init_t_sort(algo.sort_a) == FUNCTION_FAIL
		|| ft_init_t_target(algo.cost) == FUNCTION_FAIL)
		return (ft_write_err(ERR_MSG_MALLOC));
	if (!ft_error_handler(argc, argv, &tab))
		return (EXIT_FAIL);
	if (!ft_convert_to_list(&tab, &get))
		return (EXIT_FAIL);
	ft_algorithm(&get, &algo);
	return (EXIT_SUCCESS);
}
