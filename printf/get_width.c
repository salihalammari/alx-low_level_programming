#include "main.h"

void	get_width(t_check *check)
{
	check->width = 0;
	if (*check->str == '*')
	{
		check->width = va_arg(check->args, int);
		if (check->width < 0)
		{
			check->width = -(check->width);
			check->flag[e_min] = '1';
		}
		check->str++;
	}
	if (ft_isdigit(*check->str))
		check->width = ft_atoi(check->str);
	while (ft_isdigit(*check->str))
		check->str++;
}
