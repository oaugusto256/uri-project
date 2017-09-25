#include <iostream>
#include <iomanip>
#include <math.h>  

using namespace std;

int main()
{
	int t, v, d;
	float ql;
	
	cin >> t;
	cin >> v;
	
	d = v * t;
	
	ql = d/12.0;
	
	cout << fixed << setprecision(3) << ql << '\n';

	return 0;
}