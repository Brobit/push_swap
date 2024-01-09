/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_dclstadd_back.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: almarico <almarico@student.42lehavre.fr>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/09 17:29:11 by almarico          #+#    #+#             */
/*   Updated: 2024/01/09 17:32:21 by almarico         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_dclstadd_back(t_double_list **lst, t_double_list *neww)
{
	t_double_list	*last;

	last = ft_dclstlast(*lst);
	if (last)
		last->next = neww;
	else
		*lst = neww;
}
