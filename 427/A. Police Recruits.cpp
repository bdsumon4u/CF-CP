#include <bits/stdc++.h>

using namespace std;

int main() {
    int n, a, p = 0, u = 0;
    cin >> n;
    while(n--)
    {
        cin >> a;
        if(a == -1) {
            u += p == 0;
            p -= p != 0;
        } else {
            p += a;
        }
    }
    cout << u << endl;

    return 0;
}
