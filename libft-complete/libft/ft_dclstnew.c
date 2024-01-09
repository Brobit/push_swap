/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_dclst_new.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: almarico <almarico@student.42lehavre.fr>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/09 14:59:27 by almarico          #+#    #+#             */
/*   Updated: 2024/01/09 17:29:05 by almarico         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_double_list	*ft_dclst_new(void *content)
{
	t_double_list			*pilou;

	pilou = malloc(sizeof(t_double_list));
	if (!pilou)
		return (NULL);
	pilou->prev = NULL;
	pilou->content = content;
	pilou->next = NULL;
	return (pilou);
}
