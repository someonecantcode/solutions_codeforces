#include <iostream>
using namespace std;
 
int main() {
	int input;
	cin >> input;
 
	if(input == 2){
		cout << "NO";
		return 0;
	}
 
	cout << ((input % 2 == 0) ? "YES" : "NO");
}