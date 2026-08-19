#include <bits/stdc++.h>
using namespace std;


int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t, n, m;
    cin >> t;
    while(t--) {
        cin >> n >> m;
        bool exists[26] = {};
        bool valid = true;

        string s;
        while(n--) {
            cin >> s;
            exists[s[0] - 'a'] = true;
        }

        while(m--) {
            cin >> s;
            for(char c : s) {
                if (!exists[c - 'A']) {
                    valid = false;
                    break;
                }
            }
        }

        cout << (valid ? "YES" : "NO") << "\n";
    }


    return 0;
}