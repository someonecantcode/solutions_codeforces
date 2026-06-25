#include <bits/stdc++.h>
using namespace std;

int main() {
	int n, ans=0;
	string s;
	cin >> n;

	while(n--){
		char prev_c;
		cin >> s;
		for(char c : s){
			if(c == '+' && prev_c == '+'){
				ans++;
			} else if(c == '-' && prev_c == '-') {
				ans--;
			}
			prev_c = c;
		}
	}
	cout << ans;

}