#include <stdio.h>
#include <unistd.h>

/**
 * main - prints exactly "and that piece of art is useful 
 * - Dora Korpar, 2015-10-19",
 * followed by a new line, to the standard output
 * Return: 0 for Success. Other number if failed
 */
int main(void)
{
	write(2, "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n", 59);
	return (1);
}
