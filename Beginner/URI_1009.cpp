#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
	char n[50];
	double v, s , sf;

	cin >> n;
	cin >> s;
	cin >> v;

	sf = (v*0.15) + s;

	cout << fixed << setprecision(2) << "TOTAL = R$ " << sf << '\n';

	return 0;
}