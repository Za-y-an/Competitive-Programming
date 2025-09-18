// Codeforces Round 303 Div2 D - Queue
// Difficulty: 1300 (Medium)
// Tags: greedy, implementation, sorting

#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin>>n;
    vector<int> v(n);

    long long sum=0,count=0;

    for(int i=0;i<n;i++) {
        cin>>v[i];
    }

    sort(v.begin(),v.end());

    for(int i=0;i<n;i++) {

        if (sum <=v[i]) {
            count++;
        }

        else {
          continue;
        }

        sum+=v[i];
    }

    cout<<count<<endl;

    return 0;
}
