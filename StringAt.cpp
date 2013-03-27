#include<iostream>
#include<string>

using namespace std;

int main()
{
	string str ("test string");
	for(unsigned i = 0; i < str.length(); ++i)
	{
		cout << str.at(i) << "\n"; 
	}
	return 0;
}
