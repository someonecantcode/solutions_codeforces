#include <bits/stdc++.h>
using namespace std;
#define ll long long

bool isZero(double a){
	return (a >= -0.000001 && a <= 0.000001 );
}

// first check if a and b are 0  -> return -1 and exit
// if only a is 0  ->  root = -c/b
// if just quadratic solve normally; 
int main() {
	double a, b ,c;
	int total = 0;

	cin >> a >> b >> c;


	if(isZero(a) && isZero(b) && isZero(c)){
		cout << -1;
		return 0;
	}

	if(isZero(a) && isZero(b)){
		cout << 0;
		return 0;
	}

	if(isZero(a) && isZero(b) == false){
		cout << 1 << "\n";
		cout << fixed << setprecision(15) << -c/b;
		return 0;
	}


	double det = b*b-4*a*c;
	if(det < 0){
		cout << 0;
		return 0;
	}

	total = (isZero(det)) ? 1 : 2; 
	cout << total << "\n";

	if (total == 1){
		cout << fixed << setprecision(15) << (-1*b)/(2*a) << "\n";
		return 0;
	}

	det = sqrt(det);
	double um = (-b - det)/(2*a), dois = (-b + det)/(2*a);
        cout << fixed << setprecision(10) << min(um, dois)  << '\n';
        cout << fixed << setprecision(10) << max(um, dois) << '\n';
}
