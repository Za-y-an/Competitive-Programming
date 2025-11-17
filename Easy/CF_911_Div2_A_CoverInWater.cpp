// Codeforces Round 911 Div2 A - Cover in Water
// Difficulty: 800 (Easy)
// Tags: constructive algorithms, greedy, implementation, strings

#include <bits/stdc++.h>
using namespace std;

int main() {

    int t;
    cin>>t;

    while(t--) {
        int n;
        cin>>n;
        string s;
        cin>>s;

        int count = 0;
        int dot=0;
        int light =1;

        for(int i=0;i<n;i++) {

          if (s[i] == '.') {

              dot++;
              count++;

              if (dot>2) {
                  count=2;
                  cout<<count<<endl;
                  light = 0;
                  break;
              }

          }

              else
                dot=0;
        }

        if (light)
            cout<<count<<endl;

    }

    return 0;
}
