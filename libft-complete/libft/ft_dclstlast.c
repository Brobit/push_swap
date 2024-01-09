/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_dclstlast.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: almarico <almarico@student.42lehavre.fr>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/09 17:40:16 by almarico          #+#    #+#             */
/*   Updated: 2024/01/09 17:40:53 by almarico         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_double_list	*ft_dclstlast(t_double_list *lst)
{
	t_double_list	*last;

	if (!lst)
		return (NULL);
	last = lst;
	while (last->next != NULL)
		last = last->next;
	return (last);
}
