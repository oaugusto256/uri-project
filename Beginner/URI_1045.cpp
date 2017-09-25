#include <iostream>
#include <iomanip>
#include <bits/stdc++.h>

using namespace std;

int main()
{
	double a,b,c;
	double sorted[3];
	int n = sizeof(sorted)/sizeof(sorted[0]);

	for(int i = 0; i < 3; i++)
    	cin >> sorted[i];

    sort(sorted, sorted+n, std::greater<int>());

    a = sorted[0];
    b = sorted[1];
    c = sorted[2];

	if (a >= b+c)
		cout << "NAO FORMA TRIANGULO\n";
	else {
		if(a*a == (b*b + c*c))
			cout << "TRIANGULO RETANGULO\n";
		else {
			if(a*a > (b*b + c*c)) {
				cout << "TRIANGULO OBTUSANGULO\n";
				if (a == b && a == c && b == c) 
					cout << "TRIANGULO EQUILATERO\n";
				else if (a == b || a == c || b == c) 
					cout << "TRIANGULO ISOSCELES\n";
			} else if(a*a < (b*b + c*c)) {
				cout << "TRIANGULO ACUTANGULO\n";
				if (a == b && a == c && b == c) 
					cout << "TRIANGULO EQUILATERO\n";
				else if (a == b || a == c || b == c) 
					cout << "TRIANGULO ISOSCELES\n";
			}
		}
	}


	return 0;
}