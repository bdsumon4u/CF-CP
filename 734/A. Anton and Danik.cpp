#include <bits/stdc++.h>

using namespace std;

int main() {
    int n, A = 0, D = 0;
    char ch;
    cin >> n;
    while (n--) {
        cin >> ch;
        A += ch == 'A';
        D += ch == 'D';
    }

    if (A == D) {
        cout << "Friendship" << endl;
    } else {
        cout << (A > D ? "Anton" : "Danik") << endl;
    }

    return 0;
}
