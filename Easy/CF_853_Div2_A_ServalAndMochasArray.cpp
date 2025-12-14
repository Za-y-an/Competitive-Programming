// Codeforces Round 853 Div2 A - Serval and Mocha's Array
// Difficulty: 800 (Easy)
// Tags: brute force, math, number theory

#include <bits/stdc++.h>
using namespace std;

int main () {
    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;
        vector<int> v(n);

        for (int i = 0; i < n; i++) {
            cin >> v[i];
        }

        int light =1;

        for (int i = 0; i < n; i++) {

            for (int j = i + 1; j < n; j++) {

                if (gcd(v[i], v[j]) <=2) {
                    light = 0;
                    cout << "Yes" << endl;
                    break;
                }

            }

            if (light == 0) {
                break;
            }

        }

        if (light == 1) {
            cout << "No" << endl;
        }

    }

    return 0;
}
