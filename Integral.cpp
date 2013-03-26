#include <iostream>
using namespace std;

double f(double x)
{
	return (x * x);
}
double g(double x)
{
	return (x * x * x + 3 * x * x ); //g(x) = x^3 + 3x^2
}

double trapezoid(double a, double b, int n, double (*func)(double x))
{
	double area = 0.0;
	double dx = (b-a)/n;
	
	for(int i = 0; i < n; i++)
	{
		area += ((*func)(a + dx * i)) + (*func)(a + dx * (i + 1)) * dx/ 2.0;
	}
	return area;
}

int main()
{
	cout << "Let f(x) = x^2 and g(x) = x^3 + 3x^2\n\n";
	cout << "integrate f(x) from 0.0 to 1.0 where n = 10 \n"
	     << "Area = "
	     << trapezoid(0.0, 1.0, 10, f) << "\n";
	cout << "integrate g(x) = from 1.0 to 3.0 where n = 15 \n"
	     << "Area = "
	     << trapezoid(1.0, 3.0, 15, g) << "\n";

}

