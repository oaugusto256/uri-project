#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int main(){
    
    int array[3];
    int init[3];
    int n = sizeof(array)/sizeof(array[0]);
    
    for(int i = 0; i < 3; i++)
    	cin >> array[i];
    
    for(int i = 0; i < 3; i++)
    	init[i] = array[i];
    	
    sort(array, array+n);
    
    for(int i = 0; i < 3; i++)
    	cout << array[i] << "\n";
    
    cout << "\n";
    
    for(int i = 0; i < 3; i++)
    	cout << init[i] << "\n";
    
    return 0;
}