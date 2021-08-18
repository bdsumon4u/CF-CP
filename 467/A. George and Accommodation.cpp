#include <bits/stdc++.h>

using namespace std;

int main() {
    int n, p, q, t = 0;
    cin >> n;

    while (n--) {
        cin >> p >> q;
        t += q - p >= 2;
    }

    cout << t << endl;

    return 0;
}
