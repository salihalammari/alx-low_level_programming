#include "main.h"

/**
 * get_width - Calculates the width for printing
 * @format: Formatted string in which to print the arguments.
 * @i: List of arguments to be printed.
 * @list: list of arguments.
 *
 * Return: width.
 */
// int get_width(const char *format, int *i, va_list list)
// {
// 	int curr_i;
// 	int width = 0;

// 	for (curr_i = *i + 1; format[curr_i] != '\0'; curr_i++)
// 	{
// 		if (is_digit(format[curr_i]))
// 		{
// 			width *= 10;
// 			width += format[curr_i] - '0';
// 		}
// 		else if (format[curr_i] == '*')
// 		{
// 			curr_i++;
// 			width = va_arg(list, int);
// 			break;
// 		}
// 		else
// 			break;
// 	}

// 	*i = curr_i - 1;

// 	return (width);
// }


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
