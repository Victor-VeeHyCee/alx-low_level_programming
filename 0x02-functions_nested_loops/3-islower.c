#include "main.h"

/**
 * _islower - function checking for lower case
 * @c: single letter input
 * Return: 1 if the int c case is lower case, o othrwise
 */
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);
}
