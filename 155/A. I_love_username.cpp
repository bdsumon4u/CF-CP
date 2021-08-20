#include <bits/stdc++.h>

using namespace std;

int main() {
    int n, a, mn, mx, amz = 0;
    vector<int> v;
    cin >> n;

    for (int i = 0; i < n; ++i) {
        cin >> a;
        v.emplace_back(a);
        if (i) {
            if (a < mn) {
                mn = a;
                amz++;
            } else if (a > mx) {
                mx = a;
                amz++;
            }
        } else {
            mn = mx = a;
        }
    }

    cout << amz << endl;

    return 0;
}
