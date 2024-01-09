/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_dclstadd_front.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: almarico <almarico@student.42lehavre.fr>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/09 17:33:17 by almarico          #+#    #+#             */
/*   Updated: 2024/01/09 17:34:54 by almarico         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_dclstadd_front(t_double_list **lst, t_double_list *neww)
{
	neww->next = *lst;
	*lst = neww;
}
