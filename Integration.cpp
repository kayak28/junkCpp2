#include <iostream>
using namespace std;

double f(double x)
{//define f = x^2
	return (x * x);
}

double trapezoid(double a, double b, int n)
{
	double area = 0.0;
	double dx = (b-a)/n;
	for(int i = 0; i < n; i++)
	{
		area += (f(a + dx * i) + f(a + dx * (i + 1))) *  dx/2.0; 
	}
	return area;
}

int main()
{
	int n; 
	double a, b;
	cout << "Type a";
	cin >> a;
	cout <<"\nType b";
	cin >> b;
	cout << "Type numbers of subenable";
	cin >> n;

	cout << "area = " << trapezoid(a,b,n) << "\n"; 
}
