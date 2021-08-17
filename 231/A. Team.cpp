#include <bits/stdc++.h>

using namespace std;

int main() {
    int n, a, x, total = 0;
    cin >> n;

    while (n--) {
        a = 0;
        for (int i = 0; i < 3; ++i) {
            cin >> x;
            a += x;
        }
        total += a >= 2;
    }

    cout << total << endl;

    return 0;
}
