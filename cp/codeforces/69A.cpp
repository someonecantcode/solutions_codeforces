#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main() {
	int n, a, sums[3] = {0};
	cin >> n;
	
	while(n--){
		for(int i=0; i<3; i++){
			cin >> a;
			sums[i] += a;
		}
	}
	for(int i=0; i<3; i++){
		if(sums[i] != 0){
			cout << "NO";
			return 0;
		}
	}

	cout << "YES";
}
