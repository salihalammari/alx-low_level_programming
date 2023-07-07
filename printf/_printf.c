#include "main.h"

int	_printf(const char *format, ...)
{
	t_check	*check;
	int		len;

	check = ft_calloc(1, sizeof(t_check));
	va_start(check->args, format);
	check->str = format;
	while (*check->str)
	{
		while (*check->str && *check->str != '%')
		{
			ft_putchar_fd(*check->str, 1);
			check->f_len++;
			check->str++;
		}
		if (*check->str && *check->str == '%')
			ft_herewego(check);
	}
	va_end(check->args);
	len = check->f_len;
	free (check);
	return (len);
}