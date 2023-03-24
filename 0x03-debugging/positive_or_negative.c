#include "main.h"

/**
 * positive_or_negative - checks for positive, negative numbers.
 * @i: the number to be checked
 * 
 * Return: Always 0 (Success)
 */
void positive_or_negative(int i)
{

	if (i < 0)
		printf("%d is positive\n", i);
	else
		printf("%d is negative\n", i);
}
