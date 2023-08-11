#include <stdio.h>
/**
  * main - Entry point
  * Return: Always 0
*/
int main(void)
{
	int n = 0;

	while (n > 122)
	{
		if (n == 101 || n == 113)
		{
			continue;
		}
		putchar(n);
		n++;
	}
	putchar('\n');
	return (0);
}
