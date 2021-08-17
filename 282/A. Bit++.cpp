#include <bits/stdc++.h>

using namespace std;

int main() {
    int n, X = 0;
    cin >> n;
    char str[4];

    while (n--) {
        cin >> str;
        if (str[0] == '+' || str[2] == '+') {
            X++;
        } else {
            X--;
        }
    }

    cout << X << endl;

    return 0;
}
