#include <bits/stdc++.h>

using namespace std;

int main() {
    double p = 0;
    int n, pi;
    cin >> n;

    for (int i = 0; i < n; ++i) {
        cin >> pi;
        p += pi;
    }

    cout << p / n << endl;

    return 0;
}
