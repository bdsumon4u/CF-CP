#include <bits/stdc++.h>

using namespace std;

int main() {
    int n, k, time, solved = 0;
    cin >> n >> k;

    time = 240 - k;
    for (int i = 1; i <= n && time; ++i) {
        if (time - 5 * i >= 0) {
            time -= 5 * i;
            solved++;
        } else {
            break;
        }
    }

    cout << solved << endl;

    return 0;
}
