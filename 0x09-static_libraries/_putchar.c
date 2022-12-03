#include "main.h"
#include <unistd.h>
/**
 * _putchar - writes the character c
 * @c: The character
 * Return: on success 1, on error -1 is returned
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
