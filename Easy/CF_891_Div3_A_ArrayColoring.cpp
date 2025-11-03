// Codeforces Round 891 Div3 A - Array Coloring
// Difficulty: 800 (Easy)
// Tags: greedy, math

#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin>>t;

    for(int i=0;i<t;i++) {
        int n;int sum=0;
        cin>>n;

        for(int j=0;j<n;j++) {
            int a;
            cin>>a;
            sum = sum + a;
        }

        if(sum%2==0) {
            cout<<"YES"<<endl;
        }

        else {
            cout<<"NO"<<endl;
        }

    }
    
    return 0;
}
