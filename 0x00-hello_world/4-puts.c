#include <stdio.h>
/**
 * main - prints text using puts()
 *
 * Return: Always 0 (Success)
 */
#define RED "\e[0m"
int main(void)
{
	puts("\"Programming is like buliding a multilingual puzzle");
	fprintf(stderr, RED "[Anything]");
	return (0);
}
