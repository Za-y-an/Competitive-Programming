// Codeforces Round 887 Div2 A - Desorting
// Difficulty: 800 (Easy)
// Tags: brute force, greedy, math

#include <bits/stdc++.h>
using namespace std;

int main () {
    int t;
    cin>>t;

    while(t--) {
        int n;
        cin>>n;
        vector<int> v(n);

        for(int i=0;i<n;i++) {
            cin>>v[i];
        }

        vector<int> copy;
        copy = v;
        sort(copy.begin(), copy.end());

        if (copy != v) {
            cout << "0" << endl;
            continue;
        }

        long long diff=100000000000000LL;

        for(int i=1;i<n;i++) {

           if (v[i]-v[i-1] < diff) {
               diff = v[i]-v[i-1];
           }

        }

        cout<< (diff/2) + 1 <<endl;
    }

    return 0;
}
