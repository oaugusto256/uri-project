#include <iostream>
#include <iomanip>
#include <math.h>  

using namespace std;

int main()
{
	float n1, n2, n3, n4, ne;
	float m, mf, me;
	
	cin >> n1;
	cin >> n2;
	cin >> n3;
	cin >> n4;
	
	m = (n1*2 + n2*3 + n3*4 + n4*1)/10;
	
	if(m < 5) {
		cout << "Media: " << fixed << setprecision(1) << m << "\n";
		cout << "Aluno reprovado." << "\n";
	} else if (m >= 5 && m <= 6.9){
		cout << "Media: " << fixed << setprecision(1) << m << "\n";
		cout << "Aluno em exame." << "\n";
		
		cin >> ne;
		
		cout << "Nota do exame: " << ne << "\n";
		
		mf = (ne + m)/2;
		
		if(mf >= 5){
			cout << "Aluno aprovado." << "\n";
			cout << "Media final: " << fixed << setprecision(1) << mf << "\n";
		}
	} else {
		cout << "Media: " << fixed << setprecision(1) << m << "\n";
		cout << "Aluno aprovado." << "\n";
	}
		
	return 0;
}