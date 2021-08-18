#include <bits/stdc++.h>

using namespace std;

int main() {
    int n, p, a;
    set<int> s;
    cin >> n;

    for (int i = 0; i < 2; ++i) {
        cin >> p;
        while (p--) {
            cin >> a;
            s.insert(a);
        }
    }

    cout << (s.size() == n ? "I become the guy." : "Oh, my keyboard!") << endl;

    return 0;
}
