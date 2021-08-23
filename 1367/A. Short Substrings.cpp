#include <bits/stdc++.h>

using namespace std;

int main() {
    int t;
    string str;
    cin >> t;

    while (t--) {
        cin >> str;
        for (int i = 0; str[i]; ++i) {
            if (!i || i & 1) {
                cout << str[i];
            }
        }
        cout << endl;
    }

    return 0;
}
