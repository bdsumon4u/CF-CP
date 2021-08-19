#include <bits/stdc++.h>

using namespace std;

int main() {
    int k, l, m, n, d, c = 0;
    cin >> k >> l >> m >> n >> d;
    bool arr[d + 1];
    for (int i = 1; i < d + 1; ++i) {
        arr[i] = false;
    }

    for (int i = 1; k * i < d + 1; ++i) {
        arr[k * i] = true;
    }
    for (int i = 1; l * i < d + 1; ++i) {
        arr[l * i] = true;
    }
    for (int i = 1; m * i < d + 1; ++i) {
        arr[m * i] = true;
    }
    for (int i = 1; n * i < d + 1; ++i) {
        arr[n * i] = true;
    }

    for (int i = 1; i < d + 1; ++i) {
        c += arr[i];
    }

    cout << c << endl;

    return 0;
}
