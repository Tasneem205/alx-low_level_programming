#include <stdio.h>

/**
 * main - Entry point
 * Return: Always 1 (Success)
 * @filedes: is the number of fields in the input
 * @buf: is the buffer
 * @nbyte: is the size of the buffer in bytes
 */
int write(int filedes, const char *buf, unsigned int nbyte);
int main(void)
{
char msg[] = "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n";
write(2, msg, 59);
return (1);
}
