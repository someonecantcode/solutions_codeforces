#include <bits/stdc++.h>
using namespace std;
#define ll long long;

int main() {
	cin.tie(0);

	string s;
	cin >> s;
	int count = 0;

	for(char c : s){
		if(c == 'a'){
			count++;
		}
	}
	// (s-x)/2 < a 
	//  s-2a < x
	//  x must be  +1 (the next integer)
	//  cout << ((int) s.size() - 2*count)+ 1 << "\n";
	cout << min((int) s.size(), 2*count -1);
}
