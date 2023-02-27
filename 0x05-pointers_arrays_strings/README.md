0-reset_to_98.c is a function that takes a pointer to an int as parameter and updates the value it points to to 98.
1-swap.c is a function that swaps the values of two integers.
2-strlen.c is a function that returns the length of a string.
3-puts.c is a function that prints a string, followed by a new line, to stdout.
4-print_rev.c is a function that prints a string, in reverse, followed by a new line.
5-rev_string.c is a function that reverses a string.
6-puts2.c is a function that prints every other character of a string, starting with the first character, followed by a new line.
7-puts_half.c is a function that prints half of a string, followed by a new line.
8-print_array.c is a program that prints n elements of an array of integers,separated by comma, followed by a space using printf (displayed in the same order as they are
stored in the array)where n is the number of elements of the array to be printed.
9-strcpy.c is a program that has  a function that copies the string pointed to by src, including the terminating null byte (\0), to the buffer pointed to by dest.
Return value: the pointer to dest. FYI: The standard library provides a similar function.
100-atoi.c is a prgram that houses a function that converts a string to an integer. The number in the string can be preceded by an infinite number of characters,taking into account all the - and + signs before the number
If there are no numbers in the string, the function must return 0.
Limitations:No using long, declaring new variables of “type” array, using hard-code special values.Take note: The standard library provides a similar function: atoi
-fsanitize=signed-integer-overflow gcc flag will be used to compile the code.
101-keygen.c is a program that generates random valid passwords using the standard library passing betty-style tests is not mandoroty but (mandotory betty-doc tests) man srand, rand, time gdb and objdump for guidance.
