#include <stdio.h>


/**
 * numLength - returns the lenth of string
 * @num : operand number
 * Return: number of digits
 */

int numLength(int num)
{
	int length = 0;

	if (!num)
	{
		return (1);
	}

	while (num)
	{
		num = num / 10;
		length ++1;
	}

	return (length);
}
/**
 *  *main - prints the first 98 fibonaci sequences
 *  Return: 0
 */

int main(void)
{
	unsigned long F_1 = 1, F_2 = 2, m_x = 100000000, tmp;
	unsigned long f_1o = 0, f_2o = 0, tmp_o = 0;
	short int k = 1, initial_10s;

	while (k <= 98)
	{
		if (F_1o > 0)
			printf("%lu", f_1o);
		initial_l0s = numLength(m_x) - 1 - numLength(F_1);
		while (F_1o > 0 && initial_10s > 0)
		{
			printf("%i", 0);
			initial_l0s--;
		}
		printf("%lu", f1);

		tmp = (F_1 + F_2) % m_x;
		tmp_o = f_1o + f_2o + (F_1 + F_2) / m_x;
		F_1 = F_2;
		F_1o = F_2o;
		F_2 = tmp;
		F_2o = tmp_o;

		if (k != 98)
			printf(", ");
		else
			printf("\n");
		k++;
	}
	return (0);
}
