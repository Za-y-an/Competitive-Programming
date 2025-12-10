// Codeforces Round 875 Div2 A - Twin Permutations
// Difficulty: 800 (Easy)
// Tags: constructive algorithms

#include <bits/stdc++.h>
using namespace std;

int main() {
    int t ;
    cin>>t;

    while(t--) {
        int n;
        cin>>n;
        vector<int> v(n);

        for(int i=0;i<n;i++) {
            cin >>v[i];
        }

        for(int i=0;i<n;i++) {
            cout << n+1-v[i] << " ";
        }

        cout << endl;

    }

    return 0;
}
