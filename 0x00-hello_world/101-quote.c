#include <stdio.h>

/**
 * main - Entry point
 * Return: Always 1 (Success)
 */
int write(int filedes, const char *buf, unsigned int nbyte);
int main(void)
{
const char msg[] = "and that piece of art is useful\" - Dora Korpar, 2015-10-19";
write(1, msg, sizeof(msg));
return (1);
}
