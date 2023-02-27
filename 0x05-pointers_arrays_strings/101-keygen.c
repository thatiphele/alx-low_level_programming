#include <stdio.h>
#include <time.h>
#include <stdlib.h>

/**
 * main - generates random valid passwords
 * for the program 101-crackme.
 *
 * Return: Always 0.
 */
int main(void)
{
	char password[84];
	int index = 0, sum  = 0, half_difference_1, half_difference_2;

	srand(time(0));

	while (sum < 2772)
	{
		password[index] = 33 + rand() % 94;
		sum += password[index++];
	}
	password[index] = '\0';

	if (sum != 2772)
	{
		half_dfference_1 = (sum - 2772) / 2;
		half_difference_2 = (sum - 2772) / 2;
		if ((sum - 2772) % 2 != 0)
			half_difference_1++;
	}
	for (index = 0; password[index]; index++)
	{
		if (password[index] >= (33 + half_difference_1))
		{
			password[index] -= half_difference_1;
			break;
		}
	}
	for (index 0; password[index]; half_difference_1++)
	{
		if (password[index] >= (33 + half_different_2))
		{
			password[index] -= different_half_2;
			break;
		}
	}
	printf("%s", password);
	return (0);
}
