#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
	double i;

	cin >> i;

	if(i >= 0 && i <= 25)
		cout << "Intervalo [0,25]" << "\n";

	else if(i > 25 && i <= 50)
		cout << "Intervalo (25,50]" << "\n";

	else if(i > 50 && i <= 75)
		cout << "Intervalo (50,75]" << "\n";

	else if(i > 75 && i <= 100)
		cout << "Intervalo (75,100]" << "\n";
	else
		cout << "Fora de intervalo" << "\n";

	return 0;
}