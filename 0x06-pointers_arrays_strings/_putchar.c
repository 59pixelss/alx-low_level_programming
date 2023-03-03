3include <unistd.h>
/**
 * putchar - writes a character c to stdout
 * @c: char to be printed
 * Return: 1 on success
 */
int _putchar(char c)
{
	retur (write(1, &c, 1));
}
