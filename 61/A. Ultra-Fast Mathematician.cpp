#include <bits/stdc++.h>

using namespace std;

int main() {
    string num1, num2;
    cin >> num1 >> num2;

    for (int i = 0; num1[i]; ++i) {
        cout << (num1[i] == num2[i] ? '0' : '1');
    }

    return 0;
}
