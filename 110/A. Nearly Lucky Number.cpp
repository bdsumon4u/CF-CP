#include <bits/stdc++.h>

using namespace std;

typedef long long int ll;

bool is_lucky(ll n);
int lucky_digits(ll n);

int main() {
    ll n;
    int ld = 0;
    cin >> n;

    cout << (is_lucky(lucky_digits(n)) ? "YES" : "NO") << endl;

    return 0;
}

bool is_lucky(ll n) {
    do {
        if (n % 10 != 4 && n % 10 != 7) {
            return false;
        }
    } while (n /= 10);
    return true;
}

int lucky_digits(ll n) {
    int ld = 0;
    while (n) {
        ld += n % 10 == 4 || n % 10 == 7;
        n /= 10;
    }
    return ld;
}
