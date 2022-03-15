#include <stdio.h>
#include "main.h"
/**
 *main- Entry Point
 *
 *Description:Write a program that prints _putchar, followed by a new line
 *
 *Return:Always returns 0
 */
int main(void)
{
	char text[7] = "_putchar";
	int i;

	for (i = 0; i < 7; i++)
	{
	_putchar(text[i]);
	}
_putchar('\n')
return (0);
}

