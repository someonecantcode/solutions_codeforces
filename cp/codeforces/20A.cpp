#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main() {
// create a stack and parse each char indiv
// check the prev and cur char if they are 
	char c, prev_c;
	string s;	


	while(cin >> c){
		if(prev_c == '/' && c == '/'){
			continue;
		}
		prev_c = c;
		s += c;

	}

	if(s.length() > 1 && s[s.length()-1]=='/') {
		s[s.length()-1]=' ';
	}

	cout << s;
}