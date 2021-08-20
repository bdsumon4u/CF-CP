#include <bits/stdc++.h>

using namespace std;

int main() {
    int t, a, b, d;
    cin >> t;

    while (t--) {
        cin >> a >> b;
        d = abs(a - b);
        cout << (d / 10) + (d % 10 != 0) << endl;
    }

    return 0;
}
