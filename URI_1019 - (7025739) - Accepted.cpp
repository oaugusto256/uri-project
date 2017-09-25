#include <iostream>
#include <iomanip>
#include <math.h>  

using namespace std;

int main()
{
	int s, th = 0, tm = 0;
	
	cin >> s;
	
	do {
		if(s >= 3600){
			th += 1;
			s -= 3600;
		} else if (s >= 60) {
			tm += 1;
			s -= 60;
		}
	} while (s > 60);
	
	cout << th << ":" << tm << ":" << s << "\n";
		
	return 0;
}