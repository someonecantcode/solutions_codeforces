#include <bits/stdc++.h>
using namespace std;
 
int main() {
	int n;
	cin >> n;
	
	while(n){
	string word;
	cin >> word;
	
	if(word.size() > 10){ 
		cout << word[0]+to_string(word.size()-2)+word[word.size()-1] << "\n"; 
	}else{
		cout << word << "\n";
	}
	n--;
	}
}