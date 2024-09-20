#include<bits/stdc++.h>
using namespace std;
 
int main() {
	int k,n,w;
	cin >> k >> n >> w;
 
	int moneyneeded = (((w)*(w+1)*k)/2 - n);
	cout << (moneyneeded < 0 ? 0 : moneyneeded);
	
}