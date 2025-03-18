/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: memotyle <memotyle@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/21 10:24:28 by memotyle          #+#    #+#             */
/*   Updated: 2025/03/18 11:29:18 by memotyle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

# include <limits.h>
# include <stdarg.h>
# include <stdlib.h>
# include <string.h>
# include <unistd.h>

# ifndef FT_PRINTF_H
#  define FT_PRINTF_H

#  ifndef BUFFER_SIZE
#   define BUFFER_SIZE 1024

#   include <stdarg.h>
#   include <unistd.h>

typedef struct s_point
{
	int				x;
	int				y;
}					t_point;

// char
int					ft_isalpha(int c);
int					ft_isdigit(int n);
int					ft_isalnum(int c);
int					ft_isascii(int c);
int					ft_isprint(int c);
int					ft_toupper(int c);
int					ft_tolower(int c);
int					ft_isspace(int c);

// string
size_t				ft_strlcat(char *dst, const char *src, size_t size);
size_t				ft_strlen(const char *str);
size_t				ft_strlcpy(char *dest, const char *src, size_t n);
void				ft_striteri(char *s, void (*f)(unsigned int, char *));
char				*ft_strchr(const char *s, int c);
char				*ft_strrchr(const char *s, int c);
char				*ft_strnstr(const char *chaineP, const char *SousChaine,
						size_t len);
char				*ft_strdup(const char *s);
char				*ft_substr(char const *s, unsigned int start, size_t len);
char				*ft_strjoin(const char *s1, const char *s2);
char				*ft_strtrim(char const *s1, char const *set);
char				**ft_split(char *str);
char				*ft_strmapi(char const *s, char (*f)(unsigned int, char));
int					ft_strncmp(const char *s1, const char *s2, size_t n);
char				**sort_tab(char **tab);
int					ft_is_just_space(char *str);
char				*ft_concate(size_t n, ...);
int					ft_strcmp(const char *s1, const char *s2);
void				sort_int_tab(int *tab, unsigned int size);

// memory
int					ft_memcmp(const void *str1, const void *str2, size_t n);
void				*ft_memset(void *s, int c, size_t n);
void				ft_bzero(void *s, size_t n);
void				*ft_memcpy(void *dest, const void *src, size_t n);
void				*ft_memmove(void *destination, const void *source,
						size_t n);
void				*ft_memchr(const void *s, int c, size_t n);
void				*ft_memchr(const void *s, int c, size_t n);
void				*ft_calloc(size_t n, size_t size);

// io
void				ft_putchar_fd(char c, int fd);
void				ft_putstr_fd(char *s, int fd);
void				ft_putendl_fd(char *s, int fd);
void				ft_putnbr_fd(int n, int fd);

// conversion
char				*ft_itoa(int n);
int					ft_atoi(const char *str);

// maths
void				flood_fill(char **tab, t_point size, t_point begin);
int					is_power_of_2(unsigned int n);
int					max(int *tab, unsigned int len);

// pointer
void				swap_string(char **s1, char **s2);
void				ft_swap(int *a, int *b);

// bits
unsigned char		swap_bits(unsigned char octet);
void				print_bits(unsigned char octet);
unsigned char		reverse_bits(unsigned char octet);

// lists
typedef struct s_list
{
	void			*content;
	struct s_list	*next;
	void			*data;
	int				i;
}					t_list;

void				ft_lstadd_back(t_list **lst, t_list *new);
void				ft_lstadd_front(t_list **lst, t_list *new);
void				ft_lstclear(t_list **lst, void (*del)(void *));
void				ft_lstdelone(t_list *lst, void (*del)(void *));
void				ft_lstiter(t_list *lst, void (*f)(void *));
t_list				*ft_lstlast(t_list *lst);
t_list				*ft_lstmap(t_list *lst, void *(*f)(void *),
						void (*del)(void *));
t_list				*ft_lstnew(void *content);
int					ft_lstsize(t_list *lst);
t_list				*sort_list(t_list *lst, int (*cmp)(int, int));
void				ft_list_foreach(t_list *begin_list, void (*f)(void *));
void				ft_list_remove_if(t_list **begin_list, void *data_ref,
						int (*cmp)());

// printf
int					ft_putchar(char c);
int					ft_putstr(char *s);
int					ft_putnbr(int n);
int					ft_putnbr_base(char *base, int n);
int					ft_putunsi_dec(unsigned int nb);

int					ft_attributions(va_list argument, char c);
int					ft_printf(const char *s, ...);
int					ft_putptr(void *ptr, char *base, int x);

// get_next_line
char				*get_next_line(int fd);

#  endif
# endif
#endif