#include <bits/stdc++.h>
using namespace std;

int main() {
	int t, n, x, y;
	cin >> t;
	
	while(t--){
		cin >> n >> x >> y;

		if(x<=y){
			cout << ((n+x-1)/x); 
		}else{
			cout << ((n+y-1)/y);
		}
		cout << "\n";
	}
}
