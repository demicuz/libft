#ifndef LIBFT_H
# define LIBFT_H

#include <stdlib.h>

int		ft_isalpha (int c);
int		ft_isdigit (int c);
int		ft_isalnum (int c);
int		ft_isascii (int c);
int		ft_isprint (int c);
size_t	ft_strlen (const char *s);
void	*ft_memset(void *s, int c, size_t n);
void	ft_bzero(void *s, size_t n);
void	*ft_memcpy(void *dest, void *src, size_t n);

int		ft_toupper (int c);
int		ft_tolower (int c);
char	*ft_strchr(const char *s, int c);
char	*ft_strrchr(const char *s, int c);

#endif
