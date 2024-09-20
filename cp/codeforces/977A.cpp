#include <iostream>
using namespace std;
 
int main() {
	int input, times;
	cin >> input >> times;
 
	for(int i=0; i<times; i++){
		if(input % 10 == 0) {
			input = input/10;
		} else {
			input--;
		}
	}
	cout << input;
}