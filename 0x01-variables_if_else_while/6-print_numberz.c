#include <stdio.h>
/**
  *main - Entry point
  *Return: 0
  */
int main(void)
{
	int n;

	n = 0;
	while (n <= 9)
	{
		putchar('0' + n);
		n++;
	}
	putchar('\n');
	return (0);
}
