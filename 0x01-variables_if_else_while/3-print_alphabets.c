#include <stdio.h>

/**
 * main - prints the alphabet in lowercase, and then in uppercase,
 * followed by a new line
 * Return: Always 0 (Success)
 */
int main(void)
{
	int letter;

	/* print alphabet in lowercase */
	letter = 'a';
	while (letter <= 'z')
	{
		putchar(letter);

		letter++;
	}

	/* Print alphabet in uppercase */
	letter = 'A';
	while (letter <= 'Z')
	{
		putchar(letter);
		letter++;
	}
	putchar('\n');
	return (0);
}
