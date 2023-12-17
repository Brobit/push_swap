/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_bonus.h                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: almarico <almarico@student.42lehavre.fr>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/08 13:42:04 by almarico          #+#    #+#             */
/*   Updated: 2023/12/17 13:38:44 by almarico         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_BONUS_H
# define GET_NEXT_LINE_BONUS_H
# include <stddef.h>
# include <unistd.h>
# include <fcntl.h>
# include <stdlib.h>

# ifndef BUFFER_SIZE
#  define BUFFER_SIZE 5
# endif // !BUFFER_SIZE

# ifndef FD_MAX
#  define FD_MAX 128
# endif // !FD_MAX

void	ft_cut_buffer_mfd(char *buffer);
char	*ft_mod_join_mfd(char *line, char *buffer);
char	*get_next_line_mfd(int fd);
int		ft_mod_strchr_mfd(char *buffer);
int		ft_mstrlen_mfd(char *str);
char	*ft_test_end_mfd(char *dest);
char	*ft_free_mfd(char *line);

#endif
