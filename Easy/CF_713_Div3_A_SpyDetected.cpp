// Codeforces Round 713 Div3 A - Spy Detected!
// Difficulty: 800 (Easy)
// Tags: brute force, implementation

#include <bits/stdc++.h>
using namespace std;

int main() {
      int t,n;
      cin>>t;

            for(int i=0;i<t;i++) {
            cin>>n;
            vector<int> v(n);
            unordered_map<int,int> mp;
            int a;

            for(int j=0;j<n;j++) {
                  cin>>a;
                  mp[a]++;
                  v[j]=a;
            }

            int res;

            for(auto it=mp.begin();it!=mp.end();++it) {
                  if (it->second==1) {
                    res=it->first;
                  }
            }

            for(int j=0;j<n;j++) {
                  if(v[j]==res) {
                        cout<< j+1<<endl;
                        break;
                  }

            }

      }

      return 0;
}
