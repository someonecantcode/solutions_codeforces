#include <bits/stdc++.h>
using namespace std;


int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while(t--) {
        int a, b, c;
        cin >> a >> b >> c;
        // find largest two numbers (pivot sort)
        int nums[] = {a, b, c};
        sort(nums, nums + 3);

        cout << min(nums[2] - nums[1], nums[1] - nums[0]) << "\n";
    }


    return 0;
}
