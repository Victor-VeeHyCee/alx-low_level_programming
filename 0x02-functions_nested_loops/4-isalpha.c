#include "main.h"
/**
 * _isalpha - function that checks for alphabetic characters
 * @c: single letter input
 * Return: 1 if c is a letter, lower or not, 0 otherwise
 */
int _isalpha(int c)
{
	if (((c >= 'a') && (c <= 'z')) || ((c >= 'A') && (c <= 'Z')))
		return (1);
	else
		return (0);
}
