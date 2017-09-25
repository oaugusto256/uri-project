#include <iostream>
using namespace std;

int main()
{
	float n[6];
	int count = 0;

	for(int i = 0; i < 6; i++){
		cin >> n[i];
		if(n[i] > 0)
			count += 1;
	}

	cout << count << " valores positivos\n";

	return 0;
}