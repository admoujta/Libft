/******************************************************************************/
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: admoujta <admoujta@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/19 18:20:22 by admoujta          #+#    #+#             */
/*   Updated: 2026/10/09 10:43:49 by admoujta         ###   ########.fr       */
/*                                                                            */
/******************************************************************************/

#ifndef LIBFT_H
# define LIBFT_H

# include <unistd.h>
# include <stdlib.h>
# include <stdint.h>

int		ft_isalnum(int c);
int		ft_isalpha(int c);
int		ft_isascii(int c);
int		ft_isdigit(int c);
int		ft_isprint(int c);
int		ft_atoi(const char *str);
int		ft_tolower(int c);
int		ft_toupper(int c);
int		ft_strncmp(const char *s1, const char *s2, size_t n);
int		ft_memcmp(const void *s1, const void *s2, size_t n);

char	*ft_strchr(const char *str, int c);
char	*ft_strrchr(const char *str, int c);
char	*ft_strnstr(const char *str, const char *to_find, size_t n);
char	*ft_strdup(const char *str);
char	*ft_substr(char const *s, unsigned int start, size_t len);

size_t	ft_strlen(const char *str);
size_t	ft_strlcpy(char *dst, const char *src, size_t size);
size_t	ft_strlcat(char *dst, char const *src, size_t size);

void	*ft_calloc(size_t	count, size_t	size);

void	*ft_memset(void *s, int c, size_t n);
void	*ft_memchr(const void *s, int c, size_t n);
void	*ft_memcpy(void *dst, const void *src, size_t n);
void	*ft_memmove(void *dst, const void *src, size_t n);
void	ft_putchar_fd(char c, int fd);
void	ft_bzero(void *s, size_t n);
void	ft_putstr_fd(char *s, int fd);
void	ft_putendl_fd(char *s, int fd);
void	ft_putnbr_fd(int n, int fd);

#endif
