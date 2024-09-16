#include <bits/stdc++.h>
using namespace std;
 
int main(){
	int n, k;
	cin >> n;
 
	k = ((n+1)/2);
	
 
	if(n%2==1){ 
		k = k-2;	
		cout << k + 1 << "\n";
		cout << 3 << " ";
	} else {
		cout << k << "\n";
	}
	
	for(int i=1; i<=k; i++){
		cout << 2 << " ";
	}
	
}