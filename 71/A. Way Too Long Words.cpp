#include <bits/stdc++.h>

using namespace std;

int main() {
    int n, size;
    string str;
    cin >> n;

    while (n--) {
        cin >> str;

        if ((size = (int)str.size()) > 10) {
            cout << *str.begin() << size - 2 << *str.rbegin() << endl;
        } else {
            cout << str << endl;
        }
    }

    return 0;
}
