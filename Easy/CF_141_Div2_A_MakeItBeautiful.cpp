// Educational Codeforces Round 141 Div2 A - Make it Beautiful
// Difficulty: 800 (Easy)
// Tags: constructive algorithms, math, sortings

#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin>>t;

    while(t--) {
        int n;
        cin>>n;
        vector<int> v(n);
        unordered_map <int,int> mp;
        int temp;

        for(int i=0;i<n;i++) {
            int x;
            cin>>x;
            v[i]=x;
            mp[x]++;

            if (mp.size() == 2) {
                temp = i;
            }
        }

        if (mp.size() == 1) {
            cout << "No" << endl;
        }

        else {
            cout << "Yes" << endl;
            int z= v[temp];
            v[temp]= v[1];
            v[1]= z;
            int sum = 0;

            for(int i=0;i<n-1;i++) {
                sum = sum + v[i];

                if (sum == v[i+1]) {
                    sum = sum - v[i];
                    temp = v[i];
                    v[i] = v[i+1];
                    v[i+1] = temp;
                    sum = sum + v[i];
                }
            }

            for (int i=0;i<n;i++) {
                cout<<v[i]<<" ";
            }

            cout<<endl;
        }
    }

    return 0;
}
