#ifndef LIBFT_H
# define LIBFT_H

# include <unistd.h>
# include <stddef.h>
# include <stdlib.h>
# include <stdint.h>
# include <stdio.h>
# include <math.h>
# include "get_next_line.h"

typedef struct		s_list
{
	void			*content;
	size_t			content_size;
	struct s_list	*next;
}					t_list;

int					ft_isalnum(int c);
int					ft_atoi(const char *str);
void				ft_bzero(void *s, size_t n);
int					ft_countwords(const char *s, char c);
int					ft_isalpha(int c);
int					ft_isascii(int c);
int					ft_isdigit(int c);
int					ft_isprint(int c);
int					ft_isspace(int c);
char				*ft_itoa_base(int n, int base);
void				ft_lstadd(t_list **alst, t_list *ne);
void				ft_lstdel(t_list **alst, void (*del)(void *, size_t));
void				ft_lstdelone(t_list **alst, void (*del)(void *, size_t));
void				ft_lstiter(t_list *lst, void (*f)(t_list *elem));
t_list				*ft_lstmap(t_list *lst, t_list *(*f)(t_list *elem));
t_list				*ft_lstnew(const void *content, size_t content_size);
char				*ft_lltoa(int64_t ll, char *buffer, int base);
char				*ft_ltoa(int64_t l, char *buffer, int base);
char				*ft_itoa(int32_t i, char *buffer, int base);
char				*ft_stoa(int16_t s, char *buffer, int base);
char				*ft_ctoa(char c, char *buffer, int base);
char				*ft_ulltoa(uint64_t ull, char *buffer, int base);
char				*ft_ultoa(uint64_t ul, char *buffer, int base);
char				*ft_uitoa(uint32_t ui, char *buffer, int base);
char				*ft_ustoa(uint16_t us, char *buffer, int base);
char				*ft_uctoa(unsigned char c, char *buffer, int base);
void				*ft_memalloc(size_t size);
void				*ft_memccpy(void *dst, const void *src, int c, size_t n);
void				*ft_memchr(const void *s, int c, size_t n);
int					ft_memcmp(const void *s1, const void *s2, size_t n);
void				*ft_memcpy(void *dst, const void *src, size_t n);
void				ft_memdel(void **ap);
void				*ft_memmove(void *dst, const void *src, size_t len);
void				*ft_memset(void *s, int c, size_t n);
void				ft_putchar(char c);
void				ft_putchar_fd(char c, int fd);
void				ft_putendl(const char *s);
void				ft_putendl_fd(char const *s, int fd);
void				ft_putnbr(int c);
void				ft_putnbr_fd(int c, int fd);
void				ft_putstr(const char *c);
void				ft_putstr_fd(const char *s, int fd);
void				ft_putwchar(wchar_t wc);
void				ft_putwcs(wchar_t *wcs);
char				*ft_stpcpy(char *dest, const char *src);
int					ft_sqrt(int nb);
char				*ft_strcat(char *s1, const char *s2);
char				*ft_strchr(const char *s, int c);
void				ft_strclr(char *s);
int					ft_strcmp(const char *s1, const char *s2);
char				*ft_strcpy(char *dest, const char *src);
void				ft_strdel(char **as);
char				*ft_strdup(const char *s);
int					ft_strequ(const char *s1, const char *s2);
void				ft_striter(char *s, void (*f)(char *));
void				ft_striteri(char *s, void (*f)(unsigned int, char *));
char				*ft_strjoin(const char *s1, const char *s2);
size_t				ft_strlcat(char *dst, const char *src, size_t size);
size_t				ft_strlcpy(char *dst, const char *src, size_t size);
size_t				ft_strlen(const char *s);
char				*ft_strmap(char const *s, char (*f)(char));
char				*ft_strmapi(char const *s, char (*f)(unsigned int, char));
char				*ft_strncat(char *s1, const char *s2, size_t n);
int					ft_strncmp(const char *s1, const char *s2, size_t len);
char				*ft_strncpy(char *dest, const char *src, size_t len);
char				*ft_strndup(const char *s, size_t n);
int					ft_strnequ(const char *s1, const char *s2, size_t n);
char				*ft_strnew(size_t size);
char				*ft_strnstr(const char *b, const char *s, size_t n);
char				*ft_strrchr(const char *s, int c);
char				*ft_strrev(char *s);
char				**ft_strsplit(const char *s, char c);
char				*ft_strstr(const char *b, const char *s);
char				*ft_strsub(const char *s, unsigned int start, size_t len);
char				*ft_strtrim(const char *s);
int					ft_tolower(int c);
int					ft_toupper(int c);
wchar_t				*ft_wcscpy(wchar_t *dst, const wchar_t *src);
size_t				ft_wcslen(wchar_t *wcs);
wchar_t				*ft_wcsnew(size_t size);
wchar_t				*ft_strtowcs(char *src);
wchar_t				*ft_strtowcsd(char *src);
wchar_t				*ft_wcschr(const wchar_t *wcs, wchar_t wc);
wchar_t				*ft_wcsrev(wchar_t *s);
wchar_t				*ft_wcsdup(wchar_t *s);
wchar_t				*ft_wcsndup(wchar_t *s, size_t size);
wchar_t				*ft_wcsncpy(wchar_t *dst, const wchar_t *src, size_t size);
void				ft_wcsset(void *str, int c, size_t size);
size_t				ft_abs(int i);
void				ft_wcsdel(wchar_t **as);
void				ft_wcstoupper(wchar_t *wcs);
double				ft_degtorad(short angle);
#endif
