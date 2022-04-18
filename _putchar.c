#include <unistd.h>
<<<<<<< HEAD

/**
 * _putchar - writes the character c to stdout
 * @c: The character to print
 * Return: 1 on SUCCESS,
 *	   -1 on error and errno is set appropriately.
 */
=======
#include <stdlib.h>
#include <stdio.h>
/**
* _putchar - writes the character c to stdout
* @c: The character to print
*
* Return: On success 1.
* On error, -1 is returned, and errno is set appropriately.
*/

>>>>>>> 0f374be989095f8521b7f7ca6593d0b03f10b9e2
int _putchar(char c)
{
	return (write(1, &c, 1));
}
