#include <bits/stdc++.h>

using namespace std;

int main() {
    string str;
    set<char> s;
    // Contains space(s).
    getline(cin, str);

    for (int i = 0; str[i]; ++i) {
        if (str[i] >= 'a' && str[i] <= 'z') {
            s.insert(str[i]);
        }
    }

    cout << s.size() << endl;

    return 0;
}
