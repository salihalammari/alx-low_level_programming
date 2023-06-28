#include "main.h"

/**
 * get_flags - Calculates active flags
 * @format: Formatted string in which to print the arguments
 * @i: take a parameter.
 * Return: Flags:
 */

void	get_flags(t_check *check)
{
	check->flag[e_min] = '0';
	check->flag[e_0] = '0';
	check->flag[e_hash] = '0';
	check->flag[e_space] = '0';
	check->flag[e_plus] = '0';
	while (*check->str == '-' || *check->str == '0' \
			|| *check->str == '#' || *check->str == ' ' || *check->str == '+')
	{
		if (*check->str == '-')
			check->flag[e_min] = '1';
		if (*check->str == '0')
			check->flag[e_0] = '1';
		if (*check->str == '#')
			check->flag[e_hash] = '1';
		if (*check->str == ' ')
			check->flag[e_space] = '1';
		if (*check->str == '+')
			check->flag[e_plus] = '1';
		check->str++;
	}
}
