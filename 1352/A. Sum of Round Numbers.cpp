#include <bits/stdc++.h>

using namespace std;

int main() {
    int t, n, i;
    vector<int> v;
    cin >> t;

    while (t--) {
        cin >> n;
        v.clear();
        for (int i = 1; n; n /= 10, i *= 10) {
            if (n % 10) {
                v.push_back((n % 10) * i);
            }
        }
        cout << v.size() << endl;
        for (int j : v) {
            cout << j << " ";
        }
        cout << endl;
    }

    return 0;
}
