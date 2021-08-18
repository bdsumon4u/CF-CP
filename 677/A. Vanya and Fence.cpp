#include <bits/stdc++.h>

using namespace std;

int main() {
    int n, h, t, a;
    cin >> n >> h;
    t = n;

    while (n--) {
        cin >> a;
        t += a > h;
    }

    cout << t << endl;

    return 0;
}
