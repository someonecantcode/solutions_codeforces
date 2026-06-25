#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
	ll t, n, a, min_index = 0, small=0, large=0;
	cin >> t;
	//largest value decrement
	//smallest value increment
	//keep track of both
	//and do the calc later
	while(t--){
		cin >> n;

		if(n==1){
			cin >> a;
			cout << a-1 << "\n";
			continue;
		}
		for(int i=0; i<n-1; i++){
			cin >> a;
			if ( a > small){
				small = a;
				min_index = i;
			}
			large = max(a, large);
		}
		if(min_index == 1){
			small++;
		} else{
			small += 2;
		}

		cout << large-small << "\n";
		small = large = 0;
	}
}
