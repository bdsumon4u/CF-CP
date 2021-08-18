#include <bits/stdc++.h>

using namespace std;

int main() {
    int n;
    cin >> n;
    int a, q[n];

    for (int i = 0; i < n; ++i) {
        cin >> a;
        q[a - 1] = i + 1;
    }

    for (int i = 0; i < n; ++i) {
        cout << q[i] << " ";
    }

    return 0;
}
