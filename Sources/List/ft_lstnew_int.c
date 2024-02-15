/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew_int.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: almarico <almarico@student.42lehavre.fr>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/28 11:47:39 by almarico          #+#    #+#             */
/*   Updated: 2024/02/15 21:44:07 by almarico         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../Includes/ft_push_swap.h"

t_lst	*ft_lstnew_int(int content)
{
	t_lst			*pilou;

	pilou = malloc(sizeof(t_list));
	if (!pilou)
		return (NULL);
	pilou->content = content;
	pilou->next = NULL;
	return (pilou);
}
