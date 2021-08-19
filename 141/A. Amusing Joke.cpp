#include <bits/stdc++.h>

using namespace std;

int main() {
    int chars[26] = {0};
    string str1, str2, str3;
    cin >> str1 >> str2 >> str3;

    for (int i = 0; str1[i]; ++i) {
        chars[str1[i] - 'A']++;
    }
    for (int i = 0; str2[i]; ++i) {
        chars[str2[i] - 'A']++;
    }
    for (int i = 0; str3[i]; ++i) {
        chars[str3[i] - 'A']--;
    }

    for (int i : chars) {
        if (i) {
            cout << "NO" << endl;
            return 0;
        }
    }
    cout << "YES" << endl;

    return 0;
}
