#include <bits/stdc++.h>

using namespace std;

bool isComposite(int n);

int main() {
    int n;
    cin >> n;

    for (int i = 4; i <= n >> 1; ++i) {
        if (isComposite(i) && isComposite(n - i)) {
            cout << i << " " << n - i << endl;
            break;
        }
    }

    return 0;
}

bool isComposite(int n) {
    n = abs(n);
    if (n == 2) {
        return false;
    }
    for (int i = 2; i * i <= n; ++i) {
        if (n % i == 0) {
            return true;
        }
    }
    return false;
}
