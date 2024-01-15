/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ra.c                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: almarico <almarico@student.42lehavre.fr>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/13 17:14:11 by almarico          #+#    #+#             */
/*   Updated: 2024/01/15 16:17:53 by almarico         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../Includes/ft_push_swap.h"

void	ft_ra(t_get *get)
{
	t_dlls	tmp;

	tmp.last = get->dlls_a->last;
	get->dlls_a->first = get->dll_a->next;
	get->dll_a->prev = tmp.last;
	get->dll_a->next = NULL;
}
