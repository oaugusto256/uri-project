#include <iostream>
#include <iomanip>
#include <math.h>  

using namespace std;

int main()
{
	double a,b,c;
	long double delta, r1, r2;
		
	cin >> a;
	cin >> b;
	cin >> c;
	
	delta = b*b - 4*a*c;
	
	if(sqrt(delta) >= 0 && a != 0) {
		r1 = (-b + sqrt(delta))/(2*a/1.0);
		r2 = (-b - sqrt(delta))/(2*a/1.0);
		
		cout << "R1 = " << fixed << setprecision(5) << r1 << "\n";
		cout << "R2 = " << fixed << setprecision(5) << r2 << "\n";
	} else {
		cout << "Impossivel calcular" << "\n";
	}
		
	return 0;
}