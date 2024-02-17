/**
 * Question 6: Count Vowels
 * Write a program that counts the number of vowels in a sentence.
 */
#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main()
{
	char t[100];
	int i, count = 0;

	printf("Enter a sentence: ");
	fgets(t, sizeof(t), stdin);

	for (i = 0; t[i]; i++)
	{
		if (strchr("aeiouAEIOU", t[i]))
			count++;
	}
	printf("Number of vowels is: %d\n", count);
	return (0);
}
