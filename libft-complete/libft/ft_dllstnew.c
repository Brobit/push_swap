/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_dclstnew.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: almarico <almarico@student.42lehavre.fr>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/09 14:59:27 by almarico          #+#    #+#             */
/*   Updated: 2024/01/14 13:49:09 by almarico         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_dll	*ft_dllst_new(void *content)
{
	t_dll			*pilou;

	pilou = malloc(sizeof(t_dll));
	if (!pilou)
		return (NULL);
	pilou->prev = NULL;
	pilou->content = content;
	pilou->next = NULL;
	return (pilou);
}
