#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
	double a, b, c;
	double at, ac, atra, aq, ar;
	
	cin >> a;
	cin >> b;
	cin >> c;

	double pi = 3.14159;

	at = (a*c)/2;
	ac = (c*c)*pi;	
	atra = ((a + b)*c)/2;
	aq = b*b;
	ar = a*b;

	cout << fixed << setprecision(3) << "TRIANGULO: " << at << '\n';
	cout << fixed << setprecision(3) << "CIRCULO: " << ac << '\n';
	cout << fixed << setprecision(3) << "TRAPEZIO: " << atra << '\n';
	cout << fixed << setprecision(3) << "QUADRADO: " << aq << '\n';
	cout << fixed << setprecision(3) << "RETANGULO: " << ar << '\n';

	return 0;
}