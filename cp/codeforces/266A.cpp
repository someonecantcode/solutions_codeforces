#include<bits/stdc++.h>
using namespace std;
 
int main() {
	int n;
	int counter = 0;
	cin >> n;
	
	char current;
	char next;
	cin >> current;
	
	for(int i=0; i<n-1; i++){
		cin >> next;
		if(current == next) counter++;
		current = next;
	}	
	cout << counter;
}