#ifndef LIBFT_H
# define LIBFT_H

#include <stdlib.h>

int				ft_toupper(int c);
int				ft_tolower(int c);
int				ft_isprint(int c);
int				ft_isdigit(int c);
int				ft_isascii(int c);
int				ft_isalpha(int c);
int				ft_isalnum(int c);
int				ft_strlen(char *str);
unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size);
unsigned int	ft_strlcat(char *dest, char *src, unsigned int size);
void			*ft_memset(void *p, int val, size_t bytes);
void			ft_bzero(void *s, size_t n);
void			*ft_memcpy(void *dest, void *src, size_t bytes);

#endif
