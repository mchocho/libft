/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mchocho <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/26 12:46:34 by mchocho           #+#    #+#             */
/*   Updated: 2020/01/19 15:34:53 by mchocho          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
#define LIBFT_H
#include <dirent.h>
#include <grp.h>
#include <pwd.h>
#include <stdio.h>
#include <stdlib.h>
#include <sys/acl.h>
#include <sys/errno.h>
#include <sys/stat.h>
#include <sys/types.h>
#include <sys/xattr.h>
#include <time.h>
#include <unistd.h>
#include <uuid/uuid.h>
#define true 1
#define false 0
#define MAX_SIZE 2147483647 / (1024 * 4)

typedef struct			s_list
{
	void			*content;
	size_t			content_size;
	struct s_list		*next;
}				t_list;

typedef struct          s_file {
        char            *filename;
	struct  stat    file_status;
	struct  s_file  *next;
}			t_file;

typedef struct          ls_linkedlist {
        t_file 		*head;
	t_file		*next;
        t_file		*tail;
        t_file		*current;
}              file_list;

typedef struct s_line {
        char *str;
        size_t length;
        struct s_line *next;
}       t_line;

typedef struct 		gnl_linkedlist {
        struct s_line *next;
        struct s_line *head;
        struct s_line *tail;
        struct s_line *current;

}       	l_list;

void				*ft_memset(void *s, int c, size_t n);
void				ft_bzero(void *s, size_t n);
void				*ft_memcpy(void *dest, const void *src, size_t n);
void				*ft_memccpy(void *dest, const void *src, int c, size_t n);
void				*ft_memmove(void *dest, const void *src, size_t n);
void				*ft_memchr(const void *s, int c, size_t n);
int				ft_memcmp(const void *s1, const void *s2, size_t n);
size_t				ft_strlen(const char *s);
char				*ft_strdup(const char *s);
char				*ft_strcpy(char *dest, const char *src);
char				*ft_strncpy(char *dest, const char *src, size_t n);
char				*ft_strcat(char *dest, const char *src);
char				*ft_strncat(char *dest, const char *src, size_t n);
size_t				ft_strlcat(char *dst, const char *src, size_t size);
char				*ft_strchr(const char *s, int c);
char				*ft_strrchr(const char *s, int c);
char				*ft_strstr(const char *haystack, const char *needle);
char				*ft_strnstr(const char *str, const char *sub, size_t len);
int				ft_strcmp(const char *s1, const char *s2);
int				ft_strncmp(const char *s1, const char *s2, size_t n);
int				ft_atoi(const char *str);
int				ft_isalpha(int c);
int				ft_isdigit(int c);
int				ft_isalnum(int c);
int				ft_isascii(int c);
int				ft_isprint(int c);
int				ft_toupper(int c);
int				ft_tolower(int c);
void				*ft_memalloc(size_t size);
void				ft_memdel(void **ap);
char				*ft_strnew(size_t size);
void				ft_strdel(char **as);
void				ft_strclr(char *s);
void				ft_striter(char *s, void (*f)(char *));
void				ft_striteri(char *s, void(*f)(unsigned int, char *));
char				*ft_strmap(char const *s, char(*f)(char));
char				*ft_strmapi(char const *s, char (*f)(unsigned int, char));
int				ft_strequ(char const *s1, char const *s2);
int				ft_strnequ(char const *s1, char const *s2, size_t n);
char				*ft_strsub(char const *s, unsigned int start, size_t len);
char				*ft_strjoin(char const *s1, char const *s2);
char				*ft_strtrim(char const *s);
char				**ft_strsplit(char const *s, char c);
char				*ft_itoa(int n);
void				ft_putchar(char c);
void				ft_putstr(char const *s);
void				ft_putendl(char const *s);
void				ft_putnbr(int n);
void				ft_putchar_fd(char c, int fd);
void				ft_putstr_fd(char const *s, int fd);
void				ft_putendl_fd(char const *s, int fd);
void				ft_putnbr_fd(int n, int fd);
t_list				*ft_lstnew(void const *content, size_t content_size);
void				ft_lstadd(t_list **alst, t_list *new);
void				ft_lstdel(t_list **alst, void (*del)(void *, size_t));
void				ft_lstdelone(t_list **alst, void (*del)(void *, size_t));
void				ft_lstiter(t_list *lst, void (*f)(t_list *elem));
char				*ft_boolstr(int val, int c);
int				ft_isuppercase(char c);
int				ft_islowercase(char c);
int				ft_charindex(char c);
int				ft_strichr(const char *s, int c);
int				ft_strichrfromindex(const char *s, int c, unsigned int n);
int				ft_stristr(const char *s1, const char *s2);
int				ft_stristrfromindex(const char *s1, const char *s2, int i);
char				*ft_strndup(const char *s1, size_t n);
void				ft_putpaddedstr(char *str, size_t width);
void				ft_strclean(char **str);
void				ft_strcleandel(char **str);
int				ft_strcmpi(const char *s1, const char *s2);
void				ft_concatstr(char **dst, const char *src);
void				ft_initlist(l_list **list);
void				ft_addtail(l_list **list, char *str, size_t length);
void				ft_cleanher(l_list **list, int all);
void				ft_strsplice(l_list **list, int i);

#endif
