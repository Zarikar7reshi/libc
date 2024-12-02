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

// strdup, strjoin, ft_strdup, fsoares, split, itoa, strrchr, ft_strlcat, strmapi, strncmp, putnbr_fd, ft_split, calloc, 
// strnstr, ft_strrchr, ft_substr, ft_strnstr, ft_strmapi, ft_putnbr_fd, strtrim, substr, strlcat, ft_itoa, memcpy, ft_strtrim

#include <stddef.h>
#include <unistd.h>
#include <stdlib.h>
#include <limits.h>

int		ft_isalnum(int c);
int		ft_isalpha(int c);
int		ft_isascii(int c);
int		ft_isdigit(int c);
int		ft_isprint(int c);
int		ft_tolower(int c);
int		ft_toupper(int c);
int		ft_atoi(const char *str);
int		ft_strncmp(const char *s1, const char *s2, size_t n);
int		ft_memcmp(const void *a1, const void *a2, size_t size);
void	ft_bzero(void *s, size_t n);
void	ft_putchar_fd(char c, int fd);
void	ft_putstr_fd(char *s, int fd);
void	ft_putendl_fd(char *s, int fd);
void	ft_putnbr_fd(int n, int fd);
void	ft_striteri(const char *s, void (*f)(unsigned int, char *));
char	*ft_itoa(int n);
char	*ft_strdup(const char *s);
char	*ft_strchr(const char *string, int c);
char	*ft_strrchr(const char *string, int c);
char	*ft_strjoin(const char *s1, const char *s2);
char	*ft_strtrim(const char *s1, const char *set);
char	*ft_substr(const char *s, unsigned int start, size_t len);
char	*ft_strnstr(const char *haystack, const char *needle, size_t len);
char	*ft_strmapi(char *s, char (*f)(unsigned int, char));
char	**ft_split(const char *s, char c);
void	*ft_calloc(size_t nitems, size_t size);
void	*ft_memset(void *block, int c, size_t size);
void	*ft_memchr(const void *block, int c, size_t size);
void	*ft_memcpy(void *to, const void *from, size_t size);
void	*ft_memmove(void *to, const void *from, size_t size);
size_t	ft_strlen(const char *__s);
size_t	ft_strlcat(char *to, const char *from, size_t size);
size_t	ft_strlcpy(char *to, const char *from, size_t size);
