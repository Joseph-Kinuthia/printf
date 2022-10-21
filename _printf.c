#include "main.h"

/**
 * _printf - prints to the output
 *
 * Return: input len
 *
 */

int _printf(const char *format, ...)
{
	va_list arg;
	int done;

	va_start(arg, format);

	done = vfprint(stdout, format, arg);
	va_end(arg);

	return (done);

}
