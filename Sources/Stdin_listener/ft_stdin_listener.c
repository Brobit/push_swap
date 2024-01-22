/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_stdin_listener.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: almarico <almarico@student.42lehavre.fr>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/22 12:29:13 by almarico          #+#    #+#             */
/*   Updated: 2024/01/22 17:48:08 by almarico         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../Includes/checker.h"
#include <unistd.h>

void	ft_stdin_listener(t_stdin *the)
{
	char	*buf;
	int		i;

	the->tab = NULL;
	the->instruction = NULL;
	buf = malloc((BUFFER_SIZE + 1) * sizeof(char));
	if (!buf)
		return ;
	i = 1;
	while (i != 0)
	{
		// utiliser gnl puis la valeur de retour utiliser strcmp par rapport a des define d'instrucrtion et exec les instruction
		i = read(STDIN, buf, BUFFER_SIZE);
		if (i == 0)
			write(STDOUT, "fin\n", 4);
		else if (i < 0)
			write(STDERR, "oupsi\n", 6);
		else
			the->tab = ft_strjoin(the->tab, buf);
	}
	write(STDOUT, the->tab, ft_strlen(the->tab));
}
