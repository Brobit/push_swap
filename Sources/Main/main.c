/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: almarico <almarico@student.42lehavre.fr>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/10 12:16:04 by almarico          #+#    #+#             */
/*   Updated: 2024/01/20 14:29:08 by almarico         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../Includes/ft_push_swap.h"

int main(int argc, char **argv)
{
	t_param	tab;
	t_get	get;

	argv++;
	argc--;
	tab.size = 0;
	tab.array = NULL;
	tab.param = NULL;
	if (!ft_error_handler(argc, argv, &tab))
		return (EXIT_FAIL);
	if (!ft_convert_to_list(&tab, &get))
		return (EXIT_FAIL);
	return EXIT_SUCCESS;
}
