#include <iostream>
#include <iomanip>
#include <math.h>  

using namespace std;

int main()
{
	int d, ta = 0, tm = 0;
	
	cin >> d;
	
	do {
		if(d >= 365){
			ta += 1;
			d -= 365;
		} else if (d >= 30) {
			tm += 1;
			d -= 30;
		}
	} while (d > 30);
	
	cout << ta << " ano(s)" << "\n";
	cout << tm << " mes(es)" << "\n";		
	cout << d << " dia(s)" << "\n";
			
	return 0;
}