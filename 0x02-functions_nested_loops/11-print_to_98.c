#include <stdio.h>

/**
 * main-prins all natural numbers from n to 98
 * return: returns he numbers
 **/
int main(void) print_to_98(int n)
{
    if (n > 98)
    {
        for (int i = n; i >= 98; i--)
	{
            printf("%d", i);
            if (i != 98)
	    {
                putchar(',');
                putchar(' ');
            }
        }
    }
    else
    {
        for (int i = n;	i <= 98; i++)
	{
            printf("%d", i);
            if (i != 98)
	    {
                putchar(',');
                putchar(' ');
            }
        }
    }
    putchar('\n');
}
