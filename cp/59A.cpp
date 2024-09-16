#include<bits/stdc++.h>
using namespace std;
 
int main() {
	int lowercounter = 0;
	string s;
	cin >> s;
 
	
	for(int i=0; i<s.size(); i++){
		if(s[i] == tolower(s[i])){
			lowercounter++;
		}
	}
	
	if (lowercounter >= s.size()-lowercounter){
		for(int i=0; i<s.size(); i++){
			s[i]=tolower(s[i]);
		}
	} else {
		for(int i=0; i<s.size(); i++){
			s[i]=toupper(s[i]);
		}
	}
	
	cout << s;
	return 0;
}