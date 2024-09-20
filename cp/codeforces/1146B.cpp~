#include <bits/stdc++.h>
using namespace std;
#define ll long long;

int main() {
	string t, s = "";
	cin >> t;
	// so first remove all a's
	// half of it must of repeated
	// if there is half then just remove that part of the string
	// substring the length of s prime
	// must also check if they are the same
	for(char c : t){
		if(c != 'a'){
			s += c;
		}
	}	
	if ((s.substr(0, (int) s.size()/2)) == (s.substr((int) s.size()/2, (int) s.size())) && (( t.substr(0, t.size()-s.size()/2) + s.substr(0,s.size()/2)) == t)){
		 cout << t.substr(0, t.size()-s.size()/2);
	} else {
		cout << ":(";
	}

}
