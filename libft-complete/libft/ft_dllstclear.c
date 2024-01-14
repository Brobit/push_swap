/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_dclstclear.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: almarico <almarico@student.42lehavre.fr>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/09 17:35:47 by almarico          #+#    #+#             */
/*   Updated: 2024/01/14 13:54:08 by almarico         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_dllstclear(t_dll **lst, void (*del)(void *))
{
	t_dll	*nav;

	while (*lst)
	{
		nav = (*lst)->next;
		ft_dllstdelone(*lst, del);
		*lst = nav;
	}
	free(*lst);
	*lst = NULL;
}
