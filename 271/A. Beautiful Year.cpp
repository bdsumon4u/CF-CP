#include <bits/stdc++.h>

using namespace std;

bool isBeautiful(int year);

int main() {
    int year;
    cin >> year;

    while (!isBeautiful(++year));
    cout << year << endl;

    return 0;
}

bool isBeautiful(int year) {
    set<int> s;
    while (year) {
        s.insert(year % 10);
        year /= 10;
    }
    return s.size() == 4;
}
