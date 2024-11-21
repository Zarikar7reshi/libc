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

int			ft_atoi(char *str);
int			ft_isalnum(int c);
int			ft_isalpha(int c);
int			ft_isdigit(int c);
size_t			ft_strlcat(char *dest, const char *src, size_t size);
int			ft_strlen(char *str);
int			ft_strncmp(char *s1, char *s2, size_t n);
char			*ft_strnstr(char *str, char *to_find);
