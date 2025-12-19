// Pinely Round 1 Div1+Div2 A - Two Permutations
// Difficulty: 800 (Easy)
// Tags: brute force, constructive algorithms

#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin>>t;

    while(t--) {
        int n,a,b;
        cin>>n>>a>>b;

        if (n==a && n==b) {
            cout<<"YES"<<endl;
            continue;
        }

        if (a+b < n-1 )
            cout<<"YES"<<endl;

        else
            cout<<"NO"<<endl;
    }

    return 0;
}
