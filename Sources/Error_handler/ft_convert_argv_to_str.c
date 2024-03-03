/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_convert_argv_to_str.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: almarico <almarico@student.42lehavre.fr>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/10 13:20:04 by almarico          #+#    #+#             */
/*   Updated: 2024/03/03 21:59:30 by almarico         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../Includes/ft_push_swap.h"

static void	ft_fill_tab(t_param *tab, char *s, char c, size_t *index)
{
	int		j;
	int		i;

	i = 0;
	while (s && s[i])
	{
		j = i;
		while (s[i] != c && s[i])
			i++;
		tab->param[*index] = ft_substr(s, j, i - j);
		if (!tab->param[*index])
		{
			ft_free_tab(tab);
			return ;
		}
		while (s[i] == c && s[i])
			i++;
		(*index)++;
	}
}

int	ft_convert_argv_to_str(char **argv, t_param *tab)
{
	size_t		index;
	size_t		i;

	i = 0;
	while (argv[i])
		tab->size += ft_count_word(argv[i++], ' ');
	tab->param = malloc((tab->size + 1) * sizeof(char *));
	if (!tab->param)
	{
		ft_free_tab(tab);
		return (ft_write_err(ERR_MSG_MALLOC));
	}
	tab->param[tab->size] = NULL;
	i = 0;
	index = 0;
	while (argv[i])
		ft_fill_tab(tab, argv[i++], ' ', &index);
	return (FUNCTION_SUCCESS);
}
