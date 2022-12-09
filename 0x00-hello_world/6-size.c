#include <stdio.h>
int main(void)
{
	char r;
	int k;
	long int L;
	long long int A;
	float v;

	printf("Size of a char: %lu byte(s)\n", (unsigned long)sizeof(r));
	printf("Size of an int: %lu byte(s)\n", (unsigned long)sizeof(k));
	printf("Size of a long int: %lu byte(s)\n", (unsigned long)sizeof(L));
	printf("Size of a long long int: %lu byte(s)\n", (unsigned long)sizeof(A));
	printf("Size of a float: %lu byte(s)\n", (unsigned long)sizeof(v));

	return (0);
}
