#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
	double v1, v2, v3, v4, diff;

	cin >> v1;
	cin >> v2;
	cin >> v3;
	cin >> v4;

	diff = (v1*v2) - (v3*v4);

	cout << "DIFERENCA = " << diff << "\n";

	return 0;
}