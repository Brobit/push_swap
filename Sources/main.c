/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: almarico <almarico@student.42lehavre.fr>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/10 12:16:04 by almarico          #+#    #+#             */
/*   Updated: 2024/01/15 16:31:24 by almarico         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../Includes/ft_push_swap.h"

int main(int argc, char **argv)
{
	t_param	tab;
	t_get	get;

	argv++;
	argc--;
	if (!ft_error_handler(argc, argv, &tab))
		return (EXIT_FAIL);
	if (!ft_convert_to_list(&tab, &get))
		return (EXIT_FAIL);
	return EXIT_SUCCESS;
}
