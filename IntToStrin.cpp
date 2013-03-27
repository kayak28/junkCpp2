#include <sstream>
#include <string>
#include<iostream>

using namespace std;

int main()
{
	int num = 100;
	string str = IntToString(num);

	cout << str << "\n";
	return 0;
}
string IntToString(int number)
{
	string stream ss;
	ss << number; 
	return ss.str();
}
