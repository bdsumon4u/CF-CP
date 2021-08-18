#include <bits/stdc++.h>

using namespace std;

int main() {
    bool easy = true;
    int n, a;
    cin >> n;

    while (n--) {
        cin >> a;
        if (a) {
            easy = false;
            break;
        }
    }

    cout << (easy ? "EASY" : "HARD") << endl;

    return 0;
}
