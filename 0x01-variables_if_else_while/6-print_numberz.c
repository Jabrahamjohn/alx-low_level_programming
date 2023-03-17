#include <stdio.h>
/**
 * main - print if the number is postive, zero, or negative
 *
 * Description: using the main function
 * this program prints "Programming is positive, zero, or negative
 * Return: 0
 */
int main(void)
{
int x;
for (x = '0'; x < '10'; x++)
{
	putchar(x + '0');
}
putchar('\n');
return (0);
}
