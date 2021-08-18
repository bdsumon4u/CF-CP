#include <bits/stdc++.h>

using namespace std;

int main() {
    string str;
    cin >> str;
    int cnt[3] = {0};

    for (int i = 0; str[i]; ++i) {
        if (str[i] >= '1' && str[i] <= '9') {
            cnt[str[i] - '0' - 1]++;
        }
    }

    for (int i = 0, j = 0; i < 3; ++i) {
        while (cnt[i]--) {
            str[j++] = '0' + i + 1;
            str[j++] = '+';
        }
        if (i == 2) {
            str[j] = '\0';
        }
    }

    cout << str << endl;

    return 0;
}
