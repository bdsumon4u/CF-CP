#include <bits/stdc++.h>

using namespace std;

void old_sol();
void new_sol();

int main() {
    new_sol();
    return 0;
}

void old_sol() {
    int t, a, b, n;
    cin >> t;

    while (t--) {
        cin >> a >> b;
        // cout << (a % b ? b - a % b : 0) << endl;
        cout << (b - a % b) % b << endl;
    }
}

void new_sol() {
    int t, a, b, n;
    cin >> t;

    while (t--) {
        cin >> a >> b;
        for (n = a; n % b; ++n) {

        }
        cout << n - a << endl;
    }
}
