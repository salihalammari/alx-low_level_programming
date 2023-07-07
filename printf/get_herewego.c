
#include "../includes/ft_printf.h"

void	ft_herewego(t_check *check)
{
	check->str++;
	ft_flags(check);
	ft_width(check);
	ft_precision(check);
	ft_formselect(check);
}
