/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mchocho <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/26 12:46:34 by mchocho           #+#    #+#             */
/*   Updated: 2019/05/26 13:42:22 by mchocho          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include <unistd.h>

void *ft_memset(void *s, int c, size_t n);
void ft_bzero(void *s, size_t n);
void *ft_memcpy(void *dest, const void *src, size_t n);
void *ft_memccpy(void *dest, const void *src, int c, size_t n);
void *ft_memmove(void *dest, const void *src, size_t n);
void *ft_memchr(const void *s, int c, size_t n);
int ft_memcmp(const void *s1, const void *s2, size_t n);
size_t ft_strlen(const char *s);
char *ft_strdup(const char *s);
char *ft_strcpy(char *dest, const char *src);
char *ft_strncpy(char *dest, const char *src, size_t n);
char *ft_strcat(char *dest, const char *src);
char *ft_strncat(char *dest, const char *src, size_t n);
size_t ft_strlcat(char *dst, const char *src, size_t size);
char *ft_strchr(const char *s, int c);
char *ft_strrchr(const char *s, int c);
char *ft_strstr(const char *haystack, const char *needle);
char *ft_strnstr(const char *haystack, const char *needle, size_t len);
int ft_strcmp(const char *s1, const char *s2);
int ft_strncmp(const char *s1, const char *s2, size_t n);
int ft_atoi(const char *str);
int ft_isalpha(int c);
int ft_isdigit(int c);
int ft_isalnum(int c);
int ft_ascii(int c);
int ft_isprint(int c);
int ft_toupper(int c);
int ft_tolower(int c);