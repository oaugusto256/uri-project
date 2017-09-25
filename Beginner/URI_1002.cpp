#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
	double a, r;
	double pi = 3.14159;

	cin >> r;

	a = (r*r)*pi;

	cout << fixed << setprecision(4) << "A=" << a << '\n';

	return 0;
}