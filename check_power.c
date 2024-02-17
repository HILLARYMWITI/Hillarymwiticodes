/**
 * Question 3: Power of Two
 * Write a program that takes an integer as input and returns true if the input is a power of two.
 */
#include <stdio.h>

int checkpower(int f)
{
	if (f <= 0)
		return (0);

	return ((f & (f - 1)) == 0);
}

int main ()
{
	int num;

	printf("Enter the number to check: ");
	scanf("%d\n", &num);

	if (checkpower(num))
	{
		printf("%d is a power of two\n", num);
	}
	else
	{
		printf("%d is not power of two\n", num);
	}
	return (0);
}
