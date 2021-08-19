#include <bits/stdc++.h>

using namespace std;

int main() {
    int n, ans = 0, bill[5] = {1, 5, 10, 20, 100};
    cin >> n;

    for (int i = 5 - 1; i >= 0; --i) {
        ans += n / bill[i];
        n %= bill[i];
    }

    cout << ans << endl;

    return 0;
}
