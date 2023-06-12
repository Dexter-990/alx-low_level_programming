#include "main.h"

/**
 * is_divisible - checks if a number is divisible
 * @n: given number
 * @y: numbers to check with
 * @count: count of divisibility
 *
 * Return: returns count
 */

int is_divisible(int n, int y, int count)
{
	if (y > n)
		return (count);
	if (n % y == 0)
		return (is_divisible(n, y + 1, count + 1));

	return (is_divisible(n, y + 1, count));
}

/**
 * is_prime_number - checks if number is a prime number
 * @n: number to be checked
 *
 * Return: 1 if prime. Otherwise 0
 */

int is_prime_number(int n)
{
	int x;

	if (n < 2)
		return (0);
	x = is_divisible(n, 1, 0);
	if (x > 2)
		return (0);
	else
		return (1);
}

