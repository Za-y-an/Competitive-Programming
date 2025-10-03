// Codeforces Round 725 Div3 C - Number of Pairs
// Difficulty: 1300 (Medium)
// Tags: binary search, data structures, math, two pointers

#include <bits/stdc++.h>
using namespace std;

int main() {
    long long t,n,l,r,count;
    cin>>t;

    for(int i=0;i<t;i++) {
        cin>>n>>l>>r;
        vector<long long> v(n);
        for(int j=0;j<n;j++) {
            cin>>v[j];
        }

        sort(v.begin(),v.end());
        count=0;

        for(int j=0;j<n;j++) {
            int low = lower_bound(v.begin()+j+1,v.end(),l-v[j])-v.begin();
            int high = upper_bound(v.begin()+j+1,v.end(),r-v[j])- v.begin();
            count = count+ (high-low);
        }

        cout<<count<<endl;
    }

    return 0;
}
