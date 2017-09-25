#include <iostream>
#include <iomanip>
#include <math.h>  

using namespace std;

int main()
{
	int notas[7] = {100,50,20,10,5,2,1};
	int vi, v, q100 = 0, q50 = 0, q20 = 0, q10 = 0, q5 = 0, q2 = 0, q1 = 0;
	
	cin >> v; 
	vi = v;

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
		} else if (v >= 1){			
			q1 += 1;
			v -= 1;
		}  
	} while ( v != 0);
	
	cout << vi <<'\n';
	cout << q100 << " nota(s) de R$ 100,00" <<'\n';
	cout << q50 << " nota(s) de R$ 50,00" <<'\n';
	cout << q20 << " nota(s) de R$ 20,00" <<'\n';
	cout << q10 << " nota(s) de R$ 10,00" <<'\n';
	cout << q5 << " nota(s) de R$ 5,00" <<'\n';
	cout << q2 << " nota(s) de R$ 2,00" <<'\n';
	cout << q1 << " nota(s) de R$ 1,00" <<'\n';
		
	return 0;
}