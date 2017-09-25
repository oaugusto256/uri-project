#include <iostream>
#include <cmath>
using namespace std;

int main()
{
	int i, f;

	cin >> i;
	cin >> f;

	if(f > i && f <= 24){
		cout << "O JOGO DUROU " << f - i << " HORA(S)\n";
	} else if (i == f){
		cout << "O JOGO DUROU " << 24 << " HORA(S)\n";
	} else {
		cout << "O JOGO DUROU " << abs(i - 24) + f << " HORA(S)\n";
	}


	return 0;
}