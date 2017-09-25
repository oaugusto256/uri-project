#include <iostream>
#include <iomanip>
#include <math.h>  

using namespace std;

int main()
{
	int q100 = 0, q50 = 0, q20 = 0, q10 = 0, q5 = 0, q2 = 0;
	int m1 = 0, m50 = 0, m25 = 0, m10 = 0, m5 = 0, m01 = 0;
	double v;	
	
	cin >> v; 
	v +=1e-9;

	do {
		if(v >= 100){
			q100 += 1;
			v -= 100;
		} else if (v >= 50){
			q50 += 1;
			v -= 50;
		} else if (v >= 20){
			q20 += 1;
			v -= 20;
		} else if (v >= 10){			
			q10 += 1;
			v -= 10;
		} else if (v >= 5){			
			q5 += 1;
			v -= 5;
		} else if (v >= 2){			
			q2 += 1;
			v -= 2; 
		}
	} while ( v >= 2);
	
	do {
		if(v >= 1){
			m1 += 1;
			v -= 1;
		} else if (v >= 0.5){
			m50 += 1;
			v -= 0.5;
		} else if (v >= 0.25){
			m25 += 1;
			v -= 0.25;
		} else if (v >= 0.10){			
			m10 += 1;
			v -= 0.10;
		} else if (v >= 0.05){			
			m5 += 1;
			v -= 0.05;
		} else if (v >= 0.01){			
			m01 += 1;
			v -= 0.01;
		}
	} while ( v >= 0.01);
	
	cout << "NOTAS:" << '\n';
	cout << q100 << " nota(s) de R$ 100.00" <<'\n';
	cout << q50  << " nota(s) de R$ 50.00" <<'\n';
	cout << q20  << " nota(s) de R$ 20.00" <<'\n';
	cout << q10  << " nota(s) de R$ 10.00" <<'\n';
	cout << q5   << " nota(s) de R$ 5.00" <<'\n';
	cout << q2   << " nota(s) de R$ 2.00" <<'\n';

	cout << "MOEDAS:" << '\n';
	cout << m1  << " moeda(s) de R$ 1.00" <<'\n';
	cout << m50 << " moeda(s) de R$ 0.50" <<'\n';
	cout << m25 << " moeda(s) de R$ 0.25" <<'\n';
	cout << m10 << " moeda(s) de R$ 0.10" <<'\n';
	cout << m5  << " moeda(s) de R$ 0.05" <<'\n';
	cout << m01 << " moeda(s) de R$ 0.01" <<'\n';
	
	return 0;
}