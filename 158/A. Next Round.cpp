#include <bits/stdc++.h>

using namespace std;

void old_sol();
void new_sol();
void mix_sol();

int main() {
    mix_sol();
    return 0;
}

void old_sol() {
    int n, k, next = 0;
    cin >> n >> k;
    int a[n];

    for(int i = 0; i < n; i++)
    {
        cin >> a[i];
        // a[i] must be positive
        if(a[i] > 0 && (i < k || a[i] == a[k - 1]))
            next++;

    }

    cout << next << endl;
}

void new_sol() {
    int n, k, score = 0;;
    cin >> n >> k;
    vector<int> v(n);

    for (int i = 0; i < n; ++i) {
        cin >> v[i];
    }

    for (int i = 0; i < n; ++i) {
        score += v.at(i) && v.at(i) >= v.at(k - 1);
    }

    cout << score << endl;
}

void mix_sol() {
    int n, k, next = 0;
    cin >> n >> k;
    vector<int> v(n);

    for (int i = 0; i < n; ++i) {
        cin >> v[i];
        next += v.at(i) && (i < k || v.at(i) == v.at(k - 1));
    }

    cout << next << endl;
}
