#include <bits/stdc++.h>
using namespace std;


bool isPrime(int x) {
    for (int d = 2; d * d <= x; d++) {
        if (x % d == 0)
            return false;
    }
    return x >= 2;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while(t--) {
        int n;
        cin >> n;
        cout << (isPrime(n+1) ? "YES" : "NO") << "\n";
    }


    return 0;
}
