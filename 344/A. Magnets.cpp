#include <bits/stdc++.h>

using namespace std;

void old_sol();
void new_sol();

int main() {
    new_sol();
    return 0;
}

void old_sol() {
    int n, g = 0, ch, temp = 0;
    cin >> n;
    while(n--)
    {
        cin >> ch;
        g += ch != temp;
        temp = ch;
    }

    cout << g << endl;
}

void new_sol() {
    int n, g = 1;
    cin >> n;
    char m[n][2];

    for (int i = 0; i < n; ++i) {
        cin >> m[i];
        if (!i) continue;
        g += m[i][0] == m[i - 1][1];
    }

    cout << g << endl;
}
