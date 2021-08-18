#include <bits/stdc++.h>

using namespace std;

int main() {
    int k, n, w, t;
    cin >> k >> n >> w;
    t = k * w * (w + 1) >> 1;

    cout << (t > n ? t - n : 0) << endl;

    return 0;
}
