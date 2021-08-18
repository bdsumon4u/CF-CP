#include <bits/stdc++.h>

using namespace std;

int main() {
    int u = 0, l = 0;
    string word;
    cin >> word;

    for (int i = 0; word[i]; ++i) {
        if (islower(word[i])) {
            l++;
        } else {
            u++;
        }
    }

    for (int i = 0; word[i]; ++i) {
        word[i] = u <= l ? tolower(word[i]) : toupper(word[i]);
    }

    cout << word << endl;

    return 0;
}
