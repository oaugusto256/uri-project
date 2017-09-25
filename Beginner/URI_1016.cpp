#include <iostream>
#include <iomanip>
#include <math.h>  

using namespace std;

int main()
{
	int d;
	float t;
	
	cin >> d;
	
	t = (d/30.0)*60;
	
	cout << t << " minutos" <<'\n';

	return 0;
}