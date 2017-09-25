#include <iostream>
 
using namespace std;
 
int main() 
{
	int A, B, X;
	
	cin >> A;
	cin.ignore(100, '\n');
	
	cin >> B;
	cin.ignore(100, '\n');
	
	X = A+B;
	
	cout << "X = " << X << endl;
	
	return 0;
}