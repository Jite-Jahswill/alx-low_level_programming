#include "main.h"
/**
* File: 6-is_prime_number.c
* Auth: sam tech
* */

int is_divisible(int num, int div);
int is_prime_number(int n);

/**
* pnumber - help me to find the prime number
* @x: integer
* @n: integer
* Return: 1 if prime or 0 i
*/
int is_divisible(int num, int div)
{
	if (num % div == 0)
		return (0);

	if (div == num / 2)
		return (1);

	return (is_divisible(num, div + 1));
}
