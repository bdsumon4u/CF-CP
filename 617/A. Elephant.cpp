#include <bits/stdc++.h>

using namespace std;

void old_sol();
void new_sol();

/**
 * In this case,
 * old one is better.
 * @return
 */

int main() {
    new_sol();
    return 0;
}

void old_sol() {
    int step;
    unsigned long int x;
    cin >> x;

    step = x / 5;
    step += x % 5 ? 1 : 0;

    cout << step;
}

void new_sol() {
    int x, s = 0, m[] = {5, 4, 3, 2, 1};
    cin >> x;

    for (int i = 0; x && i < 5; ++i) {
        s += x / m[i];
        x %= m[i];
    }

    cout << s << endl;
}
