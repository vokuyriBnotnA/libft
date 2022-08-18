/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: klemongr <klemongr@student.21-school.ru    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/14 22:24:33 by klemongr          #+#    #+#             */
/*   Updated: 2021/10/22 23:28:53 by klemongr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

# include <stdlib.h>
# include <unistd.h>

int				ft_atoi(const char *str);
void			ft_bzero(void *arr, size_t n);
void			*ft_calloc(size_t count, size_t size);
int				ft_isalnum(int symbol);
int				ft_isalpha(int symbol);
int				ft_isascii(int symbol);
int				ft_isdigit(int symbol);
int				ft_isprint(int symbol);
char			*ft_itoa(int n);
void			*ft_memchr(const void *arr, int c, size_t n);
int				ft_memcmp(const void *arr1, const void *arr2, size_t n);
void			*ft_memcpy(void *dst, const void *src, size_t n);
void			*ft_memmove(void *dst, void *src, size_t len);
void			*ft_memset(void *destination, int c, size_t n);
void			ft_putchar_fd(char c, int fd);
void			ft_putendl_fd(char *s, int fd);
void			ft_putnbr_fd(int n, int fd);
void			ft_putstr_fd(char *s, int fd);
char			**ft_split(char const *s, char c);
char			*ft_strchr(const char *str, int ch);
char			*ft_strdup(const char *str);
void			ft_striteri(char *s, void (*f)(unsigned int, char*));
char			*ft_strjoin(char const *s1, char const *s2);
size_t			ft_strlcat(char *dst, const char *src, size_t dstsize);
size_t			ft_strlcpy(char	*dst, const	char	*src, size_t	size);
unsigned long	ft_strlen(char	*str);
char			*ft_strmapi(char const *s, char (*f)(unsigned int, char));
int				ft_strncmp(const char *str1, const char *str2, size_t n);
char			*ft_strrchr(const char *str, int ch);
char			*ft_strnstr(const char *haystack, const char *needle,
					size_t len);
char			*ft_strtrim(char const *s1, char const *set);
char			*ft_substr(char const *s, unsigned int start, size_t len);
int				ft_tolower(int ch);
int				ft_toupper(int ch);

#endif
