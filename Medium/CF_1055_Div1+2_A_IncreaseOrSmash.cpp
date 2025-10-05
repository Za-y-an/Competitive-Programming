// Codeforces Round 1055 Div1+Div2 A - Increase or Smash
// Difficulty: 1300 (Medium)
// Tags: greedy, implementation

#include <bits/stdc++.h>
using namespace std;

int main() {
    int t,n;
    cin>>t;
  
    for(int i=0;i<t;i++) {
        cin >> n;
        unordered_set<int> s;
      
        for(int j=0;j<n;j++) {
            int a;
            cin>>a;
            s.insert(a);
        }
      
        int size=s.size();
        int result= size*2-1;
      
        cout<<result<<endl;

    }
  
    return 0;
}
