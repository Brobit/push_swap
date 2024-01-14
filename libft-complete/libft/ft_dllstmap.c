/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_dclstmap.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: almarico <almarico@student.42lehavre.fr>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/09 17:41:34 by almarico          #+#    #+#             */
/*   Updated: 2024/01/14 13:51:45 by almarico         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_dll	*ft_dllstmap(t_dll *lst, void *(*f)(void *), void (*del)(void *))
{
	t_dll	*content;
	t_dll	*begin;

	if (!lst)
		return (NULL);
	content = NULL;
	begin = ft_dllstnew(f(lst->content));
	lst = lst->next;
	while (lst)
	{
		content = ft_dllstnew(f(lst->content));
		if (!content)
		{
			ft_dllstclear(&begin, del);
			return (NULL);
		}
		ft_dllstadd_back(&begin, content);
		lst = lst->next;
	}
	return (begin);
}
