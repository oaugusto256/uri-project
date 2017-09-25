#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
	double v, r;
	double pi = 3.14159;

	cin >> r;

	v = (r*r*r)*pi*(4/3.0);

	cout << fixed << setprecision(3) << "VOLUME = " << v << '\n';

	return 0;
}