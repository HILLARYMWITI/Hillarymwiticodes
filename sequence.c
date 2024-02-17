/**
 * Question 2: Fibonacci Sequence
 * Write a program to generate the Fibonacci sequence up to 100.
 */
#include <stdio.h>

int main()
{
	int n = 0, m = 1;
	int result;

	printf("Fibonacci sequence; first val, second val: %d, %d\n", n, m);
	result = n + m;

	while (result <= 100)
	{
		printf(",%d", result);
		n = m;
		m = result;
		result = n + m;
	}
	return (0);
}
