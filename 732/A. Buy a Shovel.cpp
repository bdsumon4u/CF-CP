#include <bits/stdc++.h>

using namespace std;

int main() {
    int k, r, n = 1;
    cin >> k >> r;

    while (n * k % 10 && (n * k - r) % 10) {
        n++;
    }

    cout << n << endl;

    return 0;
}
