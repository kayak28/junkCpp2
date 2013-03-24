//string::operator[]
#include<iostream>
#include <string>

using namespace std;

int main()
{
 	string str ("Test String");
	//using string constractor, defined string str is array of char.
	//string type name also indeicas array name.  
	for(int i = 0; i < str.length(); ++i)
	{
		cout << str[i] << "\n";
	}
	return 0;
	//retsult: T/n e/n s/n t/n....
}
