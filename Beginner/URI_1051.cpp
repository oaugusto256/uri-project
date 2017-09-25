#include <iostream>
#include <iomanip>
#include <string.h>
using namespace std;

int main()
{
	double s,s1,s2,s3;

	cin >> s;

	if (s <= 2000) {
		cout << "Isento\n";
	} else if (s >= 2000.01 && s <= 3000) {
		s1 = (s - 2000)*0.08;
		cout <<"R$ " << fixed << setprecision(2) << s1 << "\n";
	} else if (s >= 3000.01 && s <= 4500) {
		s1 = 80.00;
		s2 = (s - 2000 - 1000)*0.18;
		cout <<"R$ " << fixed << setprecision(2) << s1 + s2  << "\n";
	} else {
		s1 = 80.00;
		s2 = 270.00;
		s3 = (s - 2000 - 1000 - 1500)*0.28;
		cout <<"R$ " << fixed << setprecision(2) << s1 + s2 + s3  << "\n";
	}

	return 0;
}