// Codeforces Round 277.5 Div2 B - BerSU Ball
// Difficulty: 1200 (Medium)
// Tags: greedy, sorting, two pointers, graph matchings, dp

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    int n,m;
    cin>>n;
    vector<int> v(n);
    for(int i=0;i<n;i++) {
        cin>>v[i];
    }
    sort(v.begin(),v.end());

    cin >> m;
    vector<int> v2(m);
    for(int i=0;i<m;i++) {
        cin>>v2[i];
    }
    sort(v2.begin(),v2.end());

    int i=0, j=0, count = 0;
  
    while (i<n && j<m) {
      
      if ( v[i] >= v2[j]) {
          if (v[i] - v2[j] <2) {
              count++;
              i++;
              j++;
          }
          else
              j++;
      }

      else {
        
          if ( v2[j] - v[i] <2) {
              count++;
              i++;
              j++;
          }
          else
              i++;
      }
      
    }
    cout << count << endl;
    return 0;
}
