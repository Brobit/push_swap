/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: almarico <almarico@student.42lehavre.fr>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/22 11:44:03 by almarico          #+#    #+#             */
/*   Updated: 2024/01/22 11:55:31 by almarico         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strcat(char *dest, char *src)
{
	char	*tmp;
	size_t	i;
	size_t	j;

	tmp = malloc((ft_strlen(dest) + ft_strlen(src) + 1) * sizeof(char));
	if (!tmp)
		return (NULL);
	i = -1;
	while (dest[++i])
		tmp[i] = dest[i];
	j = -1;
	while (src[j])
		tmp[i++] = src[j++];
	tmp[i] = '\0';
	return (tmp);
}
