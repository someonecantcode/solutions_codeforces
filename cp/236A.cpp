#include<bits/stdc++.h>
using namespace std;
 
int main() {
	string s;
	cin >> s;
 
	int k = 0;
	sort(s.begin(), s.end());
	for(int i=0; i<s.length()-1; i++){
		if(s[i] != s[i+1]){
			k++;
		}
	}
	cout << (k % 2 != 0 ? "CHAT WITH HER!" : "IGNORE HIM!");
	
}