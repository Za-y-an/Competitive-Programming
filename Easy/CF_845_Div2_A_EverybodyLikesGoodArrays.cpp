// Codeforces Round 845 Div2 A - Everybody Likes Good Arrays!
// Difficulty: 800 (Easy)
// Tags: greedy, math

#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin>>t;

    while(t--) {
        int n,count = 0;
        cin >> n;

        vector<int> v(n);
        cin >> v[0];

        for(int i=1;i<n;i++) {
            cin >> v[i];

            if ((v[i-1] % 2)==(v[i]%2) ) {
                count++;
            }

        }

        cout<<count<<endl;
    }

    return 0;
}
