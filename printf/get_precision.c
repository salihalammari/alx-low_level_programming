#include "main.h"

void	get_precision(t_check *check)
{
	check->precision = 0;
	check->point = 0;
	if (*check->str == '.')
	{
		check->point = 1;
		check->str++;
		if (*check->str == '*')
		{
			check->precision = va_arg(check->args, int);
			if (check->precision < 0)
			{
				check->precision = 0;
				check->point = 0;
			}
			check->str++;
		}
		if (ft_isdigit(*check->str))
			check->precision = ft_atoi(check->str);
		while (ft_isdigit(*check->str))
			check->str++;
		if (check->precision > 0)
			check->point = 2;
	}
}
