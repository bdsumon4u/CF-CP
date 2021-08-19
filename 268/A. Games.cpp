#include <bits/stdc++.h>

using namespace std;

int main() {
    short n, h, a, c = 0;
    cin >> n;
    vector<pair<short, short>> v;

    for (int i = 0; i < n; ++i) {
        cin >> h >> a;
        v.emplace_back(h, a);
    }

    for (short i = 0; i < n - 1; ++i) {
        for (short j = i + 1; j < n; ++j) {
            c += v.at(i).first == v.at(j).second;
            c += v.at(i).second == v.at(j).first;
        }
    }

    cout << c << endl;

    return 0;
}
