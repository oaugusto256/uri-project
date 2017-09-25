#include <iostream>
#include <iomanip>
#include <stdlib.h> 

using namespace std;

int main()
{
	int v1, v2 ,v3, m1, m2;
	
	cin >> v1;
	cin >> v2;
	cin >> v3;
	
	m1 = (v1+v2+abs(v1-v2))/2;
	
	m2 = (m1+v3+abs(m1-v3))/2;
	
	cout << m2 << " eh o maior" << "\n";
	
	return 0;
}