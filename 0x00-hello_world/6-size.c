#include <stdio.h>
/**
 * main- Program prints the size of various types in C
 * Return: 0(success)
 */
int main(void)
{

	char a;
	int b;
	long int c;
	long long int d;
	float f;

	printf("Size of a char:%lu byte(s)\n ", sizeof(a));
	printf("Size of a int:%lu byte(s)\n", sizeof(b));
	printf("Size of a long int:%lu byte(s)\n", sizeof(c));
	printf("Size of a long long int:%lu byte(s)\n", sizeof(d));
	printf("Size of a float:%lu byte(s)\n", sizeof(f));
	return (0);
}
