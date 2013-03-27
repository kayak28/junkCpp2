#include "stdlib.h"
#include <cstdlib>
int main()
{
	char buffer[50];
	int n;
	int a = 5;
	int b = 3;

	n = sprintf(buffer, "%d + %d = %d", a, b, a+b);
	printf("[%s] is a string %d chars long\n", buffer, n);

	return 0;
}
