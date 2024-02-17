/*
 * Question 4: Capitalize Words
 * Write a program that accepts a string as input, capitalizes the first letter of each word in the 
 * string, and then returns the result string.
 */
#include <stdio.h>
#include <ctype.h>

int caps(char *n)
{
	int i = 0;

	while (n[i] != '\0')
	{
		if (n[i - 1] || i == 0 == ' ')
		{
			n[i] = toupper(n[i]);
		}
		i++;
	}
	return (0);
}

int main()
{
	char n[100];

	printf("Enter your string value: ");
	fgets(n, 100, stdin);
	caps(n);
	printf("Result: %s", n);
	return (0);
}
