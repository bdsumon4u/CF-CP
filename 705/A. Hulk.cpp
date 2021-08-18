#include <bits/stdc++.h>

using namespace std;

int main() {
    int n;
    cin >> n;

    for (int i = 0; i < n; ++i) {
        cout << (i & 1 ? "I love " : "I hate ");
        cout << (i == n - 1 ? "it" : "that ");
    }

    return 0;
}
