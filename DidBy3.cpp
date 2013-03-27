#include <iostream>

int main()
{
	int x; 

	cout << "type an interger value";
	cin >> x;
	
	if(x % 3)
	{//execute when x % 3 == 1 || == 2
		cout << "the value has reminder";
	}
	return 0;
}
