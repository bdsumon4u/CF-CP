#include <bits/stdc++.h>

using namespace std;

int main() {
    short n, mn, mx, ans;
    cin >> n;
    short arr[n];

    for (short i = 0; i < n; ++i) {
        cin >> arr[i];
        if (i) {
            if (arr[i] > arr[mx]) {
                mx = i;
            }
            if (arr[i] <= arr[mn]) {
                mn = i;
            }
        } else {
            mn = mx = i;
        }
    }

    ans = mx + n - 1 - mn;
    if (mn < mx) {
        // Minimum ... Maximum
        // Subtract by 1.
        ans -= 1;
    }

    cout << ans << endl;

    return 0;
}
