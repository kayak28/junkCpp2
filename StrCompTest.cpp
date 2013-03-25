/* strcmp exapmle */
#include "stdio.h"
#include "string.h"
#include<iostream>
using namespace std;

int main()
{
	char ch [] = "kaya";
	char chInput[80];

	do
	{
		printf("guess favourite fruit?");
		gets(chInput);
		cout << "input =" << chInput<< "\n";
		cout << "strcmp"  << strcmp(ch, chInput) <<"\n";
	}while(strcmp(ch, chInput) != 0);
	
	cout << "ch =" << ch << "\n";
	cout << "chInput = " << chInput << "\n";

	return 0;
}
