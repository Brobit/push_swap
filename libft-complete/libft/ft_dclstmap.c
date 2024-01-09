/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_dclstmap.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: almarico <almarico@student.42lehavre.fr>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/09 17:41:34 by almarico          #+#    #+#             */
/*   Updated: 2024/01/09 17:51:10 by almarico         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_double_list	*ft_dclstmap(t_double_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_double_list	*content;
	t_double_list	*begin;

	if (!lst)
		return (NULL);
	content = NULL;
	begin = ft_dclstnew(f(lst->content));
	lst = lst->next;
	while (lst)
	{
		content = ft_dclstnew(f(lst->content));
		if (!content)
		{
			ft_dclstclear(&begin, del);
			return (NULL);
		}
		ft_dclstadd_back(&begin, content);
		lst = lst->next;
	}
	return (begin);
}
