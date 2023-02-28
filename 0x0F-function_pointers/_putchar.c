#include <unistd.h>

/**
 * _putchar - writes the char c to stdout
 * @c: character to be print
 *
 * Return: 1. On success 
 * On error, -1 is returned, and errno is set appropriately.
 */
int _putchar(char c)
{
  return (write(1, &c, 1));
}
