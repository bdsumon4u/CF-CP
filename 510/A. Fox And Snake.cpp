#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n, m;
    cin >> n >> m;
    for(int i = 1; i <= n; i++)
    {
        for(int j = 1; j <= m; j++)
        {
            if(i % 2) {
                cout << "#";
            }
            else if(i % 4 == 0) {
                cout << (j == 1 ? "#" : ".");
            }
            else {
                cout << (j == m ? "#" : ".");
            }
        }
        cout << endl;
    }
}


// #######
// ......#
// #######
// #......
// #######
// ......#