/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sabruma <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/21 22:22:28 by sabruma           #+#    #+#             */
/*   Updated: 2024/11/21 22:22:58 by sabruma          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// struttura dei branch:
// lx -> repo lato wsl
// lx/master -> modifiche da verificare
// lx/lx -> modifiche approvate da pushare su win (+compilazione)
// win -> repo lato windows
// win/lx -> modifiche apporvate salvate
// win/master -> file pronti per la consegna da copiare in github
// da github recuperare i file per pusharli su intra

#include <stddef.h>
#include <unistd.h>
#include <stdlib.h>

int			ft_atoi(const char *str);
int			ft_isalnum(int c);
int			ft_isalpha(int c);
int         ft_isascii(int c);
int         ft_isupper(int c);
int         ft_islower(int c);
int			ft_isdigit(int c);
int         ft_ispunct(int c);
int         ft_isprint(int c);
int         ft_isspace(int c);
int         ft_tolower(int c);
int         ft_toupper(int c);
int			ft_strncmp(char *s1, char *s2, size_t n);
int         ft_memcmp(const void *a1, const void *a2, size_t size);
void        ft_bzero(void *s, size_t n);
char        *ft_strnstr(char *str, char *to_find, size_t len);
char        *ft_strchr(const char *string, int c);
char        *ft_strdup(const char *s);
char        *ft_strrchr(const char *string, int c);
void        *ft_memchr(const void *block, int c, size_t size);
void        *ft_memcpy(void *to, const void *from, size_t size);
void        *ft_memmove(void *to, const void *from, size_t size);
void        *ft_memset(void *block, int c, size_t size);
void        *ft_calloc(size_t nitems, size_t size);
size_t		    ft_strlen(const char *__s);
size_t			ft_strlcat(char *dest, const char *src, size_t size);
size_t          ft_strlcpy(char *to, char *from, size_t size);