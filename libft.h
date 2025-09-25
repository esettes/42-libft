#ifndef LIBFT_H
# define LIBFT_H

#include <stdlib.h>
#include <stdio.h>

int				ft_toupper(int c);
int				ft_tolower(int c);
int				ft_isprint(int c);
int				ft_isdigit(int c);
int				ft_isascii(int c);
int				ft_isalpha(int c);
int				ft_isalnum(int c);
int				ft_strlen(const char *str);
unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size);
unsigned int	ft_strlcat(char *dest, char *src, unsigned int size);
void			*ft_memset(void *p, int val, size_t bytes);
void			ft_bzero(void *s, size_t n);
void			*ft_memcpy(void *dest, const void *src, size_t bytes);
void			*ft_memchr(const void *s, int c, size_t n);
int				ft_memcmp(const void *s1, const void *s2, size_t n);
void			ft_memmove(void *dest, const void *src, size_t bytes);
char			*ft_strchr(const char *str, int c);
int				ft_strncmp(char *s1, char *s2, unsigned int n);
char			*ft_strchr(const char *str, int c);
char			*ft_strnstr(const char *big, const char *little, size_t len);
int				ft_atoi(const char *str);
void			*ft_calloc(size_t count, size_t size);
char			*ft_strdup(const char *s1);
char			*ft_substr(char const *s, unsigned int start, size_t len);
char			*ft_strjoin(char const *s1, char const *s2);
char			*ft_strtrim(char const *s1, char const *set);

#endif
