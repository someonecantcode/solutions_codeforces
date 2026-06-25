#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main() {
	int n, k;
	char c = '`';
	string ans = "";	

	cin >> n >> k;
	while(n--){
	c++;
	ans += c;
		if((c-96) == k){
			c = '`';
		}

			
		
	}
	cout << ans;
}