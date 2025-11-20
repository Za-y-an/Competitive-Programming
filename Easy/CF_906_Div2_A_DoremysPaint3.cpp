// Codeforces Round 906 Div2 A - Doremy's Paint 3
// Difficulty: 800 (Easy)
// Tags: constructive algorithms

#include <bits/stdc++.h>
using namespace std;

int main () {
    int t;
    cin>>t;

    while(t--) {

        unordered_map<int,int> mp;
        int n;
        cin>>n;

        for(int i=0;i<n;i++) {
         int x;
            cin>>x;
            mp[x]++;
        }

        if (mp.size()==1) {
            cout<<"YES"<<endl;
            continue;
        }

        if (mp.size()>2) {
            cout << "No" << endl;
            continue;
        }
      
            auto it=mp.begin();
            int a,b;
            a=it-> second;
            it++;
            b=it-> second;

            if (a==b || (a+1)==b || (b+1)==a) {
                cout<<"Yes"<<endl;
                continue;
            }

        cout << "No" << endl;
    }

    return 0;
}
