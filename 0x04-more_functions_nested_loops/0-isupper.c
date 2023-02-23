#include "main.h"

/**
* _isupper - returns 1 if uppercase alphabet and 0 otherwise
* @c: takes in a character
* Return: 0 for uppercase, 1 for lowercase
**/
int _isupper(int c)
{
if (c >= 'A' && c <= 'Z')
return (1);
else
return (0);
}#include "holberton.h"

/**
  * _isupper - Check if a letter is upper
  * @x: The number to be checked
  *
  * Return: 1 for upper letter or 0 for any else
  */
int _isupper(int x)
{
	if (x >= 65 && x <= 90)
	{
		return (1);
	}

	return (0);
}
