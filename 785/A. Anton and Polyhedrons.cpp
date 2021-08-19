#include <bits/stdc++.h>

using namespace std;

int main() {
    int n, ans = 0;
    string type;
    cin >> n;

    while (n--) {
        cin >> type;
        if (type == "Tetrahedron") {
            ans += 4;
        } else if (type == "Cube") {
            ans += 6;
        } else if (type == "Octahedron") {
            ans += 8;
        } else if (type == "Dodecahedron") {
            ans += 12;
        } else {
            ans += 20;
        }
    }
    cout << ans << endl;

    return 0;
}
