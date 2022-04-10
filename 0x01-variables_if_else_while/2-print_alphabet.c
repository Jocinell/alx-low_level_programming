<<<<<<< HEAD
i#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 *  * main - Entry point
 *   *
 *    *
 *     * Return: Always 0 (Success)
 *      */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (n > 0)
		printf("%d is positive\n", n);
	else if (n == 0)
		printf("%d is zero\n", n);
	else if (n < 0)
		printf("%d is negative\n", n);
=======
#include <stdio.h>

/**
 * main - Entry point
 *
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int i;
	int ch;

	ch = 97;
	i = 0;
	while (i < 26)
	{
		putchar(ch);
		ch++;
		i++;
	}
	putchar(10);
>>>>>>> 00496f00b15906096b4b031ebd4f86ef655c8ccf
	return (0);
}
