#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
	double v1, v2, mean;

	cin >> v1;
	cin >> v2;

	mean = ((v1*3.5) + (v2*7.5))/11;

	cout << fixed << setprecision(5) << "MEDIA = " << mean << "\n";

	return 0;
}