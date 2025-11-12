// Codeforces Round 912 Div2 A - Halloumi Boxes
// Difficulty: 800 (Easy)
// Tags: brute force, greedy, sortings

#include <bits/stdc++.h>
using namespace std;

int main() {

    int t,n,k;
    cin>>t;

    while(t--) {
        cin>>n>>k;
        vector<int> v(n);
        vector <int> v1;

        for(int i=0;i<n;i++) {
            int x;
            cin>>x;
            v[i]=x;
            v1.push_back(x);
        }

        sort(v1.begin(),v1.end());

        if (v1==v) {
            cout<<"YES"<<endl;
        }

        else {
            if (k>=2)
                cout <<"yes"<<endl;

            else
                cout<<"no"<<endl;
        }

    }
    
    return 0;
}
