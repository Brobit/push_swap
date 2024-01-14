/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: almarico <almarico@student.42lehavre.fr>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/19 12:27:38 by almarico          #+#    #+#             */
/*   Updated: 2024/01/14 13:51:36 by almarico         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

# include <stddef.h>
# include <stdio.h>
# include <string.h>
# include <stdlib.h>
# include <unistd.h>

typedef struct s_list
{
	void			*content;
	struct s_list	*next;
}				t_list;

typedef struct s_lmanipulate
{
	t_list	*first;
}				t_lmanipulate;

typedef struct s_dll
{
	struct s_dll	*prev;
	void					*content;
	struct s_dll	*next;
}				t_dll;

typedef struct s_dlls
{
	t_dll	*first;
	t_dll	*last;
}				t_dlls;

typedef long long t_ll;

t_ll				ft_atoll(const char *string);
t_list			*ft_lstnew(void *content);
t_list			*ft_lstlast(t_list *lst);
t_list			*ft_lstmap(t_list *lst, void *(*f)(void *), void(*del)(void *));
t_dll			*ft_dllstnew(void *content);
t_dll			*ft_dllstlast(t_dll *lst);
t_dll			*ft_dllstmap(t_dll *lst, void *(*f)(void *), void (*del)(void *));
void			*ft_memchr(const void *s, int c, size_t n);
void			*ft_memcpy(void *dest, const void *src, size_t n);
void			*ft_memmove(void *dest, const void *src, size_t n);
void			*ft_memset(void *s, int c, size_t n);
void			*ft_calloc(size_t nmemb, size_t size);
void			ft_dllstadd_back(t_dll **lst, t_dll *neww);
void			ft_dllstadd_front(t_dll **lst, t_dll *neww);
void			ft_dllstclear(t_dll **lst, void (*del)(void *));
void			ft_dllstdelone(t_dll *lst, void (*del)(void *));
void			ft_dllstiter(t_dll *lst, void (*f)(void *));
void			ft_dllstinit(t_dll *list);
void			ft_lstadd_back(t_list **lst, t_list *neww);
void			ft_lstadd_front(t_list **lst, t_list *neww);
void			ft_lstdelone(t_list *lst, void (*del)(void *));
void			ft_lstclear(t_list **lst, void (*del)(void *));
void			ft_lstiter(t_list *lst, void (*f)(void *));
void			ft_striteri(char *s, void (*f)(unsigned int, char *));
void			ft_lstinit(t_list *list);
void			ft_putchar_fd(char c, int fd);
void			ft_putstr_fd(char *s, int fd);
void			ft_putendl_fd(char *s, int fd);
void			ft_putnbr_fd(int n, int fd);
void			ft_bzero(void *s, size_t n);
char			**ft_split(char const *s, char c);
char			*ft_strchr(const char *s, int c);
char			*ft_strrchr(const char *s, int c);
char			*ft_strnstr(const char *big, const char *little, size_t len);
char			*ft_strdup(const char *s);
char			*ft_substr(char const *s, unsigned int start, size_t len);
char			*ft_strjoin(char const *s1, char const *s2);
char			*ft_strtrim(char const *s1, char const *set);
char			*ft_itoa(int n);
char			*ft_strmapi(char const *s, char (*f)(unsigned int, char));
size_t			ft_strlen(const char *s);
size_t			ft_strlcpy(char *dst, const char *src, size_t size);
size_t			ft_strlcat(char *dst, const char *src, size_t size);
int				ft_lstsize(t_list *lst);
int				ft_atoi(const char *string);
int				ft_isalnum(int charactere);
int				ft_isalpha(int charactere);
int				ft_isascii(int c);
int				ft_isdigit(int charactere);
int				ft_isprint(int charactere);
int				ft_tolower(int c);
int				ft_toupper(int c);
int				ft_strncmp(const char *s1, const char *s2, unsigned int n);
int				ft_memcmp(const void *s1, const void *s2, size_t n);
int				ft_size(long long int n);
int				ft_count_word(char const *str, char c);

#endif // !LIBFT_H
