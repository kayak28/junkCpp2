#include <iostream>
#include <cstring>
#include <cctype>
using namespace std;

int main ()
{
	string line = "Elizabeth had a little lamb";
	string temp; 
	char theline = "Elizabeth had a little lamb"; 

	cout << theline << "\n";

	line[4] = 't';
	int pos = (int) line.find('z'); 
	line[pos] = 'e';
	line[5] = 'l';
	cout << "the line " << line << "\n";
	temp = line.substr(1,3);
	cout << "temo " << temp << "\n"; 


}
