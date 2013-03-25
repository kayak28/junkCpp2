#include<iostream>
using namespace std;

int main ()
{
	int scalar = 0;
	int digit[4];
	digit[0] = 9;
	digit[1] = 9;
	digit[2] = 7; // means 0799 
	//So that after increment, should return 0800

	for(int i = 0; i < 4 ; i++)
	{
		if(digit[i] == 9)
		{
			digit[i] == 0;
			digit[i + 1] ++;
			if(digit[i + 1] == 10)
			{
				`
			} 
		}
		
		for(int k = 4 -1; k >= 0; k--)
		{
			cout << digit[k] << "\n";	
		}
	}


	return 0;
}
