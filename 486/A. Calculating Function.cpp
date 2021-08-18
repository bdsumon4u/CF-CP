#include <bits/stdc++.h>

using namespace std;

typedef long long int ll;

int main() {
    ll n, r;
    cin >> n;

    r = n >> 1;
    (n & 1) && (r -= n);

    cout << r << endl;

    return 0;
}
