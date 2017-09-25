#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int main(){
    
	double a,b,c;

	cin >> a;
	cin >> b;
	cin >> c;

    if (a < b + c && b < a + c && c < a + b){
        cout << "Perimetro = " << fixed << setprecision(1) << a + b + c << "\n";
    } else {
        cout << "Area = " << fixed << setprecision(1) << c * (a + b) / 2 << "\n";
    }

    
    return 0;
}