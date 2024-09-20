#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main() {
	unordered_set<char> set;
	set.insert('a');
	set.insert('o');
	set.insert('y');
	set.insert('e');
	set.insert('u');
	set.insert('i');

	char c;
	bool dot = true;
	string ans = "";
	//unorder_set containing all vowels
	//lookup each char if it is contained within
	//if is a vowel continue
	//else append . and char
	//repeat
	while(cin >> c){
		c = (char) tolower(c);
			if(set.find(c) != set.end()) {
				continue;
			} else {
				ans += '.';
				ans += c;
			}
	}
	cout << ans;
}

