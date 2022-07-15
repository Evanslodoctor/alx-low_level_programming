# __0x05-pointers_arrays_strings: This directory contains tasks that explore pointers, strings and memory allocation__
## >> __Tasks__

### __0. 98 Battery st.__

- 0-reset_to_98.c
>This file contains a prototype __void reset_to_98(int *n);__ that takes a pointer to an int as parameter and updates the value it points to to 98.

### __1. Don't swap horses in crossing a stream__

- 1-swap.c
> This file includes a function that swaps the values of two integers using the prototype __void swap_int(int *a, int *b);__.

### __2. This report, by its very length, defends itself against the risk of being read__

- 2-strlen.c
> This file contains a function that returns the length of a string using the prototype __int _strlen(char *s);__.

### __3. I do not fear computers. I fear the lack of them__

- 3-puts.c
> This file includes a function that prints a string, followed by a new line, to stdout using the prototype __void _puts(char *str);__.
This prototype uses another prototype **_putchar(char s);** which uses write function __write(1, &c, 1);__ to print the string by traversing throughout the string from index 0 until the pointer evaluates to the NULL character.
