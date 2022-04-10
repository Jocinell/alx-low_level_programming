#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
<<<<<<< HEAD
 *  * main - Entry point
 *   *
 *    *
 *     * Return: Always 0 (Success)
 *      */
=======
 * main - Entry point
 *
 * Return: Always 0 (Sucess)
 */
>>>>>>> 00496f00b15906096b4b031ebd4f86ef655c8ccf
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
	return (0);
}
