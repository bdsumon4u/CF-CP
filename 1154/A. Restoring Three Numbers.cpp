#include <bits/stdc++.h>

using namespace std;

int main() {
    int a, b, c, d;
    cin >> a >> b >> c >> d;

    if (a > d) {
        swap(a, d);
    }
    if (b > d) {
        swap(b, d);
    }
    if (c > d) {
        swap(c, d);
    }

    cout << d - c << " " << d - b << " " << d - a << endl;

    return 0;
}
