#include <stdio.h>

/**
 * jack_bauer - prints the hours and minutes of Jack Bauer's longest day.
 *
 */
void jack_bauer(void)
{
	int hour, minute;

	for (hour = 0; hour <= 23; hour++)
	{

	for (minute = 0; minute <= 59; minute++)

		{
		putchar(hour / 10 + '0');
		putchar(hour % 10 + '0');
		putchar(':');
		putchar(minute / 10 + '0');
		putchar(minute % 10 + '0');
		putchar('\n');
		}
	}
}
