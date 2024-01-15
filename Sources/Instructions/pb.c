/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pb.c                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: almarico <almarico@student.42lehavre.fr>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/13 17:14:01 by almarico          #+#    #+#             */
/*   Updated: 2024/01/15 11:06:17 by almarico         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../Includes/ft_push_swap.h"

void	ft_pb(t_get *get)
{
	get->dlls_b->first = get->dll_a;
	get->dlls_a->first = get->dll_a->next;
	get->dll_a->next = get->dll_b;
	get->dll_b->prev = get->dll_a;
}
