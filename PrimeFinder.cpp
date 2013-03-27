#include<iomanip> 
#include <iostream>
using namespace std;

int main()
{
	int numPrim = 0;
	int primeBox[500];
	
	for(int x = 2; x <= 1000; x++)
	{
		int i;
		for(i = 2; i < x; i++)
		{
			if((x % i) == 0)
			{
				break;
			}
		}
		if(x == i)
		{
			primeBox[numPrim] = x;
		}
	}
	//output 
	for(int i = 0; i < numPrim; i++)
	{
		cout << setw(4) << primeBox[i];
		cout << "\n";
	}

	return 0;
}
