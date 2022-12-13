#include<stdio>

/**
 * main - prints _putchar, followed by a new line.
 * Return - 0
 */
int main(void)
{

	int n = 0;
	char str_hbt[8] = "_putchar";
	
	while (n < 8)
	{

	_putchar(str_hbt[n]);
	n += 1;

	}

	_putchar('\n');
	return 0;
}
