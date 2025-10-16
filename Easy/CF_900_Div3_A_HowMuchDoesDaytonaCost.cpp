// Codeforces Round 900 Div3 A - How Much Does Daytona Cost?
// Difficulty: 800 (Easy)
// Tags: greedy

#include <bits/stdc++.h>
using namespace std;

int main() {
    int t,n,k;
    cin>>t;

    for(int i=0;i<t;i++) {

        int light=1;
        cin>>n>>k;
        vector<int> v(n);

        for(int j=0;j<n;j++) {
            cin>>v[j];
        }

        for(int j=0;j<n;j++) {

            if(v[j]==k) {
                cout<<"YES"<<endl;
                light = 0;
                break;
            }

        }

        if(light==1) {
            cout<<"NO"<<endl;
        }

    }

    return 0;
}
