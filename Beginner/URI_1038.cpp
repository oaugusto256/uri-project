#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
	int c[5] = {1,2,3,4,5};
	float p[5] = {4,4.5,5,2,1.5};

	int ci, qi;
	float v;

	cin >> ci;
	cin >> qi;

	v = p[ci-1] * qi;

	cout << fixed << setprecision(2) << "Total: R$ " << v << "\n";

	return 0;
}