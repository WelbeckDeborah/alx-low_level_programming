#include <stdio.h>

/**
 * main - Prints numbers 0 to 9 and letters to letter
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
int n;

for (n = 48; n < 58; n++)
{
putchar(n);
if (n != 57)
{
putchar(',');
putchar(' ');
}
}
putchar('\n');
return (0);
}