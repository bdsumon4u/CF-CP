#include <bits/stdc++.h>

using namespace std;

void old_sol();
void new_sol();

int main() {
    new_sol();
    return 0;
}

void old_sol() {
    char ch1, ch2;
    string str1, str2;
    cin >> str1 >> str2;

    for (int i = 0; str1[i]; ++i) {
        if ((ch1 = tolower(str1[i])) != (ch2 = tolower(str2[i]))) {
            break;
        }
    }

    if (ch1 < ch2) {
        cout << -1 << endl;
    } else if (ch1 > ch2) {
        cout << 1 << endl;
    } else {
        cout << 0 << endl;
    }
}

void new_sol() {
    string str1, str2;
    cin >> str1 >> str2;

    for (int i = 0; str1[i]; ++i) {
        if (tolower(str1[i]) < tolower(str2[i])) {
            cout << -1 << endl;
            return;
        }
        if (tolower(str1[i]) > tolower(str2[i])) {
            cout << 1 << endl;
            return;
        }
    }

    cout << 0 << endl;
}
