#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main- Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
char ch;
clrscr();
for (ch= 'a'; ch<= 'z'; ch++)
{
putchar(ch);
putchar('\n');
getch();
}
return (0);
}
