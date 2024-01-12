/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: almarico <almarico@student.42lehavre.fr>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/10 12:16:04 by almarico          #+#    #+#             */
/*   Updated: 2024/01/12 17:26:38 by almarico         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../Includes/ft_push_swap.h"

int main(int argc, char **argv)
{
	t_param	tab;
	t_double_list	*dclist_a;
	t_double_list_save	dclist_a_save;

	argv++;
	argc--;
	if (!ft_error_handler(argc, argv, &tab))
		return (EXIT_FAIL);
	dclist_a = NULL;
	if (!ft_convert_to_dclist(&tab, &dclist_a, &dclist_a_save))
		return (EXIT_FAIL);
	return EXIT_SUCCESS;
}
