#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
* main -  Entry point
*
* Description: print the last digit of the number stored in the variable n
*
* Return: Always (Success)
*/

int main(void)
{
	int n, lstd;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	lstd = n % 10;

	if (lstd > 5)
	{
		printf("Last digit of %d is %d and is greater than 5\n", n, lstd);
	} else if (lstd == 0)
	{
		printf("Last digit of %d is %d and is 0\n", n, lstd);
	} else if (lstd < 6 && lstd != 0)
	{
		printf("Last digit of %d is %d and is less than 6 and not 0\n", n, lstd);
	}

	return (0);
}
