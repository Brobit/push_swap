/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_algorithm.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: almarico <almarico@student.42lehavre.fr>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/18 11:41:06 by almarico          #+#    #+#             */
/*   Updated: 2024/02/27 14:51:17 by almarico         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../Includes/ft_push_swap.h"

void	ft_algorithm(t_get *get, t_algo *algo)
{
	if (ft_lstsize_int(get->stack_a) <= 3)
		ft_sort_under_three(get, algo);
	else if (ft_lstsize_int(get->stack_a) > 3)
		ft_sort_stack(get, algo);
}
