#include <stdio.h>



/**
 *
 * main - Entry point.
 *
 *
 *
 * Return: Always 0.
 *
 */

int main(void)

{
	int i = '0';
	char ch = 'a';

	while (i <= '9')
	{
		putchar(i);
		i++;
	}

	while (ch <= 'f')
	{
		putchar(ch);
		ch++;
	}
	putchar('\n');
	return (0);

}
