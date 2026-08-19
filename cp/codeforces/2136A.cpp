#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--) {
        int a, b, c, d;
        cin >> a >> b >> c >> d;
        c -= a;
        d -= b;

        // optimal 3 spacing KK_KK_KK  2(R+1)
        bool t1 = max(a, b) <= 2 * min(a, b) + 2;
        bool t2 = max(c, d) <= 2 * min(c, d) + 2;
        cout << ((t1 && t2) ? "YES" : "NO") << "\n";
    }

    return 0;
}
