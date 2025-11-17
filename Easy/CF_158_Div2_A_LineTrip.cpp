// Educational Codeforces Round 158 Div2 A - Line Trip
// Difficulty: 800 (Easy)
// Tags: greedy, math

#include <bits/stdc++.h>
using namespace std;

int main() {

    int t,n,x;
    cin>>t;

    while(t--) {
        cin>>n;
        cin>>x;
        vector<int> v(n);

        for(int i=0;i<n;i++) {
            cin>>v[i];
        }

        int max;

        if (x<v[0]) {
            max=2*x;
            cout<<max<<endl;
            continue;
        }

        max=v[0];
        int last = -1;

        for (int i=0;i<n-1;i++) {

            if (v[i+1]>x) {
                last=i;
                break;
            }

            if (max< (v[i+1]-v[i])) {
                max=v[i+1]-v[i];
            }
        }

        int now;

        if (last==-1) {
            now=x-v[n-1];
            now =2*now;
        }

        else {
            now=x-v[last];
            now =2*now;
        }

        if (max<now) {
            max=now;
        }

        cout<<max<<endl;

    }

    return 0;
}
