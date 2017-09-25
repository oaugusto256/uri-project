#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

int main()
{
	double s, r;

	cin >> s;

	if (s >= 0.00 && s <= 400.00){
		cout << "Novo salario: " << fixed << setprecision(2) << s + (s*15/100.00) << "\n";
		cout << "Reajuste ganho: " << fixed << setprecision(2) << (s*15/100.00) << "\n";
		cout << "Em percentual: 15 " << (char)37 << "\n";
	} else if (s >= 400.01 && s <= 800.00){
		cout << "Novo salario: " << fixed << setprecision(2) << s + (s*12/100.00) << "\n";
		cout << "Reajuste ganho: " << fixed << setprecision(2) << (s*12/100.00) << "\n";
		cout << "Em percentual: 12 " << (char)37 << "\n";
	} else if (s >= 800.01 && s <= 1200.00){
		cout << "Novo salario: " << fixed << setprecision(2) << s + (s*10/100.00) << "\n";
		cout << "Reajuste ganho: " << fixed << setprecision(2) << (s*10/100.00) << "\n";
		cout << "Em percentual: 10 " << (char)37 << "\n";
	} else if (s >= 1200.01 && s <= 2000.00){
		cout << "Novo salario: " << fixed << setprecision(2) << s + (s*7/100.00) << "\n";
		cout << "Reajuste ganho: " << fixed << setprecision(2) << (s*7/100.00) << "\n";
		cout << "Em percentual: 7 " << (char)37 << "\n";
	} else {
		cout << "Novo salario: " << fixed << setprecision(2) << s + (s*4/100.00) << "\n";
		cout << "Reajuste ganho: " << fixed << setprecision(2) << (s*4/100.00) << "\n";
		cout << "Em percentual: 4 " << (char)37 << "\n";
	}

	return 0;
}