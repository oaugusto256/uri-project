#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
	double v1, v2, v3, mean;

	cin >> v1;
	cin >> v2;
	cin >> v3;

	mean = ((v1*2) + (v2*3) + (v3*5))/10;

	cout << fixed << setprecision(1) << "MEDIA = " << mean << "\n";

	return 0;
}