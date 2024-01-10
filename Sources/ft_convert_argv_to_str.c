/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_convert_argv_to_str.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: almarico <almarico@student.42lehavre.fr>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/10 13:20:04 by almarico          #+#    #+#             */
/*   Updated: 2024/01/10 14:08:04 by almarico         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../Includes/ft_push_swap.h"

t_param	**ft_convert_argv_to_str(char **argv)
{
	t_param		**tab;
	size_t		tab_nb;
	size_t		i;

	i = 0;
	tab_nb = 0;
	tab = NULL;
	while (argv[i])
		tab_nb += ft_count_word(argv[i++], ' ');
	tab = malloc(tab_nb * sizeof(t_param));
	if (!tab)
		return (ft_write_err_char());
	i = 0;
	while (argv[i])
	{

	}
	return (tab);
}
