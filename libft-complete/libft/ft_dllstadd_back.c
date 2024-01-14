/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_dllstadd_back.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: almarico <almarico@student.42lehavre.fr>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/09 17:29:11 by almarico          #+#    #+#             */
/*   Updated: 2024/01/14 14:25:40 by almarico         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_dllstadd_back(t_dll **lst, t_dll *neww)
{
	t_dll	*last;

	last = ft_dllstlast(*lst);
	if (last)
	{
		last->next = neww;
		neww->prev = last;
	}
	else
		*lst = neww;
}
