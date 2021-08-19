#include <bits/stdc++.h>

using namespace std;

int main() {
    int n;
    string str;
    set<char> s;
    cin >> n;
    cin >> str;

    for (int i = 0; str[i]; ++i) {
        s.insert(tolower(str[i]));
    }

    cout << (s.size() == 26 ? "YES" : "NO") << endl;

    return 0;
}
