// Codeforces Round 894 Div3 B - Sequence Game
// Difficulty: 800 (Easy)
// Tags: constructive algorithms

#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin>>t;

    while(t--) {
        int n,x;
        cin>>n;
        vector<int> v(n);
        vector<int> v2;

        cin>>x;
        v[0]=x;
        v2.push_back(x);

        for (int i=1;i<n;i++) {
            int x ;
            cin>>x;
            v[i]=x;

            if (v[i-1]<=v[i]) {
                v2.push_back(v[i]);
            }

            else {
                v2.push_back(v[i]);
                v2.push_back(v[i]);
            }
        }

        cout<< v2.size() << endl;

        for (int i=0;i<v2.size();i++) {
            cout<<v2[i]<<" ";
        }

        cout<<endl;

    }

    return 0;
}
