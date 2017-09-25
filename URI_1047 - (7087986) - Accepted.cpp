#include <iostream>
#include <cmath>
using namespace std;

int main()
{
	int ih, im, fh, fm, th, tm;

	cin >> ih;
	cin >> im;
	cin >> fh;
	cin >> fm;

	if (ih == fh && im == fm){
		cout << "O JOGO DUROU 24 HORA(S) E 0 MINUTO(S)\n";
	} else if (fh > ih && fh <= 24){
		th = fh - ih;
		if(th == 1 && fm < im){
			cout << "O JOGO DUROU 0 HORA(S) E " << 60 + (fm - im) << " MINUTO(S)\n"; 
		} else {
			cout << "O JOGO DUROU " << th << " HORA(S) E " << abs(fm - im) << " MINUTO(S)\n";
		}
	} else {
		th = abs(ih - 24) + fh;
		if(fm < im){
			cout << "O JOGO DUROU " << th - 1 << " HORA(S) E " << 60 + (fm - im) << " MINUTO(S)\n"; 
		} else {
			cout << "O JOGO DUROU " << th << " HORA(S) E " << abs(fm - im) << " MINUTO(S)\n";
		}
	}


	return 0;
}