#include <bits/stdc++.h>

using namespace std;

int main() {
    int d = 0, cnt[26] = {0};
    string str;
    cin >> str;

    for (int i = 0; str[i]; ++i) {
        d += ++cnt[str[i] - 'a'] == 1;
    }

    cout << (d & 1 ? "IGNORE HIM!" : "CHAT WITH HER!") << endl;

    return 0;
}
