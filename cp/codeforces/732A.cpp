#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main() {
	int k,r, ans=0, sum=0;
	cin >> k >> r;

	while(ans < 10){
		sum+=k;
		ans++;

		int a = (sum%10);
		if(a==0 || a==r){
			break;
		}


	}
	cout << ans;
}
