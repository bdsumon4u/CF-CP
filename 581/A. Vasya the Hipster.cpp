#include <bits/stdc++.h>

using namespace std;

int main() {
    int a, b;
    cin >> a >> b;

    if (a > b) {
        a ^= b;
        b ^= a;
        a ^= b;
    }

    cout << a << " " << ((b - a) >> 1) << endl;

    return 0;
}
