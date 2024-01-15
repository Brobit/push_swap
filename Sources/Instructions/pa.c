/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pa.c                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: almarico <almarico@student.42lehavre.fr>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/13 17:12:17 by almarico          #+#    #+#             */
/*   Updated: 2024/01/15 11:02:47 by almarico         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../Includes/ft_push_swap.h"

void	ft_pa(t_get *get)
{
	get->dlls_a->first = get->dll_b;
	get->dlls_b->first = get->dll_b->next;
	get->dll_b->next = get->dll_a;
	get->dll_a->prev = get->dll_b;
}
