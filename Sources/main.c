/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: almarico <almarico@student.42lehavre.fr>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/10 12:16:04 by almarico          #+#    #+#             */
/*   Updated: 2024/01/10 12:53:57 by almarico         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../Includes/ft_push_swap.h"
#include <unistd.h>

int main(int argc, char *argv[])
{
	argv++;
	argc--;
	if (argc == 0 || argc == 1)
		ft_write_err();

	return EXIT_SUCCESS;
}
