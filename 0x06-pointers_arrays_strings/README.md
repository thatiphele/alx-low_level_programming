0-strcat.c A function that concatenates two strings. It appends the src string to the dest string, overwriting the terminating null byte (\0) at the end of dest, 
and then adds a terminating null byteReturns a pointer to the resulting string dest. FYI: The standard library provides a similar function: strcat.

1-strncat.c A function that concatenates two strings. It will use at most n bytes from src; and src does not need to be null-terminated if it contains n or more bytes. It returns a pointer to the resulting string dest. FYI: The standard library provides a similar function: strncat.

2-strncpy.c A function that works exactly like strncpy FYI: The standard library provides a similar function: strncpy. 

3-strcmp.c A function that works exactly like strcmp. FYI: The standard library provides a similar function: strcmp.

4-rev_array.c A function that reverses the content of an array of integers. n is the number of elements of the array.

5-string_toupper.c A function that changes all lowercase letters of a string to uppercase.


6-cap_string.c A function that capitalizes all words of a string. My separators of words: space, tabulation, new line, ,, ;, ., !, ?, ", (, ), {, and }.

7-leet.c A function that encodes a string into 1337.I'm limited to 1 prototype and 2 loops in my code,without using switch and any ternary operation.

Letters a and A should be replaced by 4
Letters e and E should be replaced by 3
Letters o and O should be replaced by 0
Letters t and T should be replaced by 7
Letters l and L should be replaced by 1.

100-rot13.c A function that encodes a string using rot13.I'm limited to 1 if statement and 2 loops in my code.
No using switch statement or any ternary operation.

101-print_number.c A function that prints an integer. I can only use _putchar function to print.
No using long,arrays or pointers nor hard-code special values.

102-magic.c Add one line to this code, so that the program prints a[2] = 98, followed by a new line using one statement. No using the variable a in the new line of code, modifying the variable p, using ,
(comma),the standard library nor code anything else than the line of expected line of code at the expected line. The code should be written at line 19, before the ; No removing anything from
the initial code (not even the comments) and don’t change anything but the line of code I add (no changing the spaces to tabs!) 

103-infinite_add.c A function that prints an integer. I can only use _putchar function to print.
No using long,arrays or pointers nor hard-code special values.

104-print_buffer.c A function that prints a buffer using the standard library. It must print the content of size bytes of the buffer pointed by b
The output should print 10 bytes per line
Each line starts with the position of the first byte of the line in hexadecimal (8 chars), starting with 0,show the hexadecimal content (2 chars) of the buffer, 2 bytes at a time, separated by a space,show the content of the buffer. If the byte is a printable character, print the letter, if not, print . and end with a new line \n. f size is 0 or less, the output should be a new line only \nThe output should look like the following example, and formatted exactly the same way as the main.c file.


