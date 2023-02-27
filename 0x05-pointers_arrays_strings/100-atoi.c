{
	int d, f, i, n, length, num_digit;

	i = 0;
	d = 0;
	num_digit = 0;
	f = 0;
	n = 0;
	length = 0;
	
	
	while (s[length] != '\0')
		length++;

	while (i < length && f == 0)
	{
		if (s[i] == '-')
			++d;

		if (s[i] >= '0' && s[i] <= '9')
		{
			num_digit = s[i] - '0';

			if (d % 2)
				num_digit = -num_digit;
			n = n * 10 + num_digit;
			f = 1;

			if (s[i + 1] < '0' || s[i + 1] > '9')
				break;
			f = 0;
		}
		i++;
	}

	if (f == 0)
		return (0);

	return (n);
}
