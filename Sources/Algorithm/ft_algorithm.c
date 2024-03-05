/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_algorithm.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: almarico <almarico@student.42lehavre.fr>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/18 11:41:06 by almarico          #+#    #+#             */
/*   Updated: 2024/03/04 09:42:31 by almarico         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../Includes/ft_push_swap.h"

void	ft_algorithm(t_get *get, t_algo *algo)
{
	if (get->size_a <= 3)
		ft_sort_under_three(get, algo);
	else if (get->size_a > 3)
		ft_sort_stack(get, algo);
}
