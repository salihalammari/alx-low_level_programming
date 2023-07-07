#ifndef MAIN_H
# define MAIN_H
# include <stdarg.h>

enum		e_flags
{
	e_min,
	e_0,
	e_hash,
	e_space,
	e_plus,
};
typedef struct s_check
{
	const char	*str;
	va_list		args;
	int			width;
	int			precision;
	char		flag[5];
	int			f_len;
	int			point;
}				t_check;
void			ft_herewego(t_check *check);
void			ft_formselect(t_check *check);
void			ft_convertc(t_check *check);
void			ft_converts(t_check *check);
void			ft_convertd(t_check *check);
void			ft_convertu(t_check *check);
void			ft_convertx(t_check *check);
void			ft_convertp(t_check *check);
void			ft_convertper(t_check *check);
void			ft_flags(t_check *check);
void			ft_precision(t_check *check);
void			ft_width(t_check *check);
int				ft_printf(const char *format, ...);
void			ft_putnchar_fd(char c, int n, int fd);
void			ft_putchar_fd(char c, int fd);
void			ft_putnchar_fd(char c, int n, int fd);
int				ft_isdigit(int c);
int				ft_atoi(const char *str);
size_t			ft_strlcpy(char *dst, const char *src, size_t dstsize);
void			*ft_calloc(size_t count, size_t size);
char			*ft_strdup(const char *s1);

#endif

