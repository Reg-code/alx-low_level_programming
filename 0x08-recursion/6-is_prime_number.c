#include "main.h"

/**
 * isprime- number is prime?
 * @n: integer params
 * @m: integer params
 * Return: boolean
 */
int isprime(int n, int m)
{
	if (m % n == 0)
	{
		return (0);
	}
	else if (m / 2 > n)
	{
		return (isprime(n + 2, m));
	}
	else
	{
		return (1);
	}
}
/**
* is_prime_number - prime
* @n: integer params
* Return: recursion
*/
int is_prime_number(int n)
{
	if ((!(n % 2) && n != 2) || n < 2)

	{
		return (0);
	}
	else
	{
		return (divisors(3, n));
	}
}
