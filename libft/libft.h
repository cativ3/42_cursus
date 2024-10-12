/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yusufozel <yusufozel@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/07 17:18:37 by yozel             #+#    #+#             */
/*   Updated: 2024/10/12 17:36:54 by yusufozel        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

# include <stdlib.h>

int			ft_isalpha(int c);

int			ft_isdigit(int c);

int			ft_isalnum(int c);

int			ft_isascii(int c);

int			ft_isprint(int c);

int         ft_toupper(int c);

int         ft_tolower(int c);

int	        ft_strncmp(const char *s1, const char *s2, size_t n);

int         ft_memcmp(const void *s1, const void *s2, size_t n);

int         ft_atoi(const char *str);

size_t		ft_strlen(const char *s);

void	*ft_memset(void *b, int c, size_t len);

void	*ft_memchr(const void *s, int c, size_t n);

void	ft_bzero(void *s, size_t n);

char	*ft_strchr(const char *s, int c);

char	*ft_strrchr(const char *s, int c);

char	*ft_strnstr(const char *haystack, const char *needle, size_t len);

// void    *ft_memcpy(void *dst, void *src, size_t n);

#endif