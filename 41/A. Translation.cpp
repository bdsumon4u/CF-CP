#include <bits/stdc++.h>

using namespace std;

int main() {
    bool yes = true;
    int size;
    string str, rev;
    cin >> str >> rev;
    size = str.size();

    for (int i = 0; str[i]; ++i) {
        if (str[i] != rev[size - i - 1]) {
            yes = false;
            break;
        }
    }
    cout << (yes ? "YES" : "NO") << endl;

    return 0;
}
