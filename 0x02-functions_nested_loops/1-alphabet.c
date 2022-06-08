#include <stdio.h>
#include "main.h"
/**
 * print_alphabet - prints the alphabet, in lowercase
 *
 * Return: Always 0 
 */
void print_alphabet(void)
{
char alph;
for (alph = 'a'; alph <= 'z'; alph++)
{
putchar(alph);
}
putchar('\n');
}

