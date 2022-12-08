#include <stdio.h>
/**
 * main - print put sizes of data types in C
 * code by Ayo
 * Return:0
 */
int main(void)
{
	char a;
	int b;
	long int c;
	long long int d;
	float f;

	printf("Size of a char: %lu byte(S)\n", (unsigned long)sizeoff(a));
	printf("Size of an int: %lu byte(S)\n", (unsigned long)sizeoff(b));
	printf("Size of a long int: %lu byte(S)\n", (unsigned long)sizeoff(c));
	printf("Size of a long long int: %lu byte(S)\n", (unsigned long)sizeoff(d));
	printf("Size of a float: %lu byte(S)\n", (unsigned long)sizeoff(f));
	return (0);
