/*
 * Question 5: Reverse Integer
 * Write a program that takes an integer as input and returns an integer with reversed digit 
 * ordering.
 */
#include <stdio.h>

int main()
{
	int num, j;
	int change = 0;

	printf("Enter an integer: ");
	scanf("%d", &num);

	while (num != 0)
	{
		j = num % 10;
		change = change * 10 + j;
		num /= 10;
	}
	printf("Result is: %d", change);
	return (0);
}
