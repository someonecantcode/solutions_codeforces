#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main() {
	ll t, n, a, sum=0, last;
	cin >> t;

	while(t--){
		cin >> n;

		for(ll i=0; i<n-2; i++){
			cin >> a;
			sum -= a; 
		}
		cin >> a >> last;
		sum += a;
		cout << last - sum << "\n";
		sum = 0;
	}		
}
