#include <iostream>
#include <iomanip>
 
using namespace std;
 
int main() {
 
 	int c1, c2, n1, n2;
 	float v1, v2, m;
 	
	cin >> c1;
	cin >> n1;
	cin >> v1;
	
	cin >> c2;
	cin >> n2;
	cin >> v2;
 	
 	m = (n1*v1) + (n2*v2);
 	
 	cout << fixed << setprecision(2);
 	cout << "VALOR A PAGAR: R$ " << m << "\n";
    return 0;
}