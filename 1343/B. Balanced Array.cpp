#include <bits/stdc++.h>

using namespace std;

int main() {
    int t, n, s;
    cin >> t;

    while (t--) {
        cin >> n;
        if ((n >> 1) & 1) {
            cout << "NO" << endl;
            continue;
        }
        s = 0;
        cout << "YES" << endl;
        for (int i = 1; i <= n >> 1; ++i) {
            s += i << 1;
            cout << (i << 1) << " ";
        }
        for (int i = 1; i <= n >> 1; ++i) {
            if (i == n >> 1) {
                cout << s << endl;
            } else {
                cout << (i << 1) - 1 << " ";
                s -= (i << 1) - 1;
            }
        }
    }

    return 0;
}
