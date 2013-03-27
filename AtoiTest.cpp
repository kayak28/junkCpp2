//atoi function sample 
#include <string>
#include "stdio.h"//where print functions are stored 
#include "stdlib.h"//where atoi is stored 
#include <iostream>
using namespace std;

int main()
{
	string str("this is kaya");
	int i;
	int ans;
	char buffer[256]; // 256 indexes of an array named buffer
	for(int m = 0; m < 3; m++)
	{
		printf("Enter a number: ");
		fgets(buffer, 256, stdin); 
		ans = atoi(str[m]);
		i = atoi(buffer);
			
		cout << m << "\n";
		printf("the value entered is %d", i);
	} 
	return 0;
}

/*
*Reslut: 
*	if entered value = 1234, %d will show 1234;
*	
*	if entered value = h78, &d will show 0;
*
*	if entered value = 6i9, %d will show 6; 
* 
*	atoi can change the value without limitation of length. 
*/

