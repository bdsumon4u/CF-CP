#include <bits/stdc++.h>

using namespace std;

int main() {
    int n, r = 0;
    string str;
    cin >> n >> str;

    for (int i = 1, j; i < n; ++i) {
        r += str[i] == str[i - 1];
    }

    cout << r << endl;

    return 0;
}

/**
* 5
* RRRRR
*/
