#include<stdio.h>
#include<stdlib.h>
#include<string.h>
/**
 * main - Prints all possible combinations of three digits
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
int n, m, y;
for (n = 48; n < 58; n++)
{
for (m = 49; m <= 58; m++)
{
for (y = 50; y <= 58; m++)
{
if (y > m && m  > n)
{
putchar(n);
putchar(m);
putchar(y);
if (n != 55 || m != 56)
{
putchar(',');
putchar(' ');
}
}
}
}
}
putchar('\n');
return (0);
}
