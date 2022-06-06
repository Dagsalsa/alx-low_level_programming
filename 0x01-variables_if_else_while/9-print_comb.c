# include <stdio.h>
/**
 * main- Entry point
 *
 * Return: Always 0 (Success)
 *
 */
int main(void)
{
int i;
int j;
for (i = 0; i <= 9; i++)
{
for (j = 0; i <= 9; i++)
{
putchar(i);
putchar(j);
}
}
putchar('\n');
return (0);
}
