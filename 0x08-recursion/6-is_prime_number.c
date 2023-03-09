/**
 * is_prime - A function that checks if an input number is a prime number.
 * @n: The input number.
 * @c: The iterator.
 * Return: 1 if n is a prime number,else 0 if n is not a prime number.
 */

int is_prime(unsigned int n, unsigned int c)
{
	if (n % c == 0)
	{
		if (n == c)
			return (1);
		else
			return (0);
	}
	return (0 + is_prime(n, c + 1));
}

/**
 * is_prime_number - Checks to see if an input number is a prime number or not.
 * @n: The input number.
 * Return: 0 if n is not a prime number,else 1 if n is a prime number.
 */

int is_prime_number(int n)
{
	if ((n == 0)  || (n < 0) ||  (n == 1))
		return (0);
	return (is_prime(n, 2));
}
