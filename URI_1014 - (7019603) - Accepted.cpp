#include <iostream>
#include <iomanip>
#include <stdlib.h> 

using namespace std;

int main()
{
	int d;
	double c, v;

	cin >> d;
	cin >> c;

	v = d/c;
	
	cout << fixed << setprecision(3) << v << " km/l" <<'\n';

	return 0;
}