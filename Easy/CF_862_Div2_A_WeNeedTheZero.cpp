// Codeforces Round 862 Div2 A - We Need the Zero
// Difficulty: 800 (Easy)
// Tags: bitmasks, brute force

#include <bits/stdc++.h>
using namespace std;

int main () {
    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;

        int z;
        cin >> z;

        for (int i = 1; i < n; i++) {
            int x;
            cin >> x;
            z= z ^x;
        }

        if (n & 1 == 1) {
           cout << z << endl;
        }

        else if ( z== 0) {
            cout << 255 << endl;
        }

        else {
            cout << -1 << endl;
        }

    }

    return 0;
}
