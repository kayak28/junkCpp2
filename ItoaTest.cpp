#include "stdio.h"
#include "stdlib.h"
#include <cstdlib>
int main()
{
	int i;
	char buffer[33];
	printf("Enter a number: ");
	scanf("%d", &i);
	itoa(i, buffer,10);
	printf("decimal: %s\n", buffer);
	itoa(i, buffer, 16);
	printf("hexadecimal: %s\n",buffer);
	itoa(i, buffer, 2);
	itoa("binary : %s\n",buffer);
	return 0;
}
