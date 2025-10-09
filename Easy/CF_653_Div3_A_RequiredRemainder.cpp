// Codeforces Round 653 Div3 A - Required Remainder
// Difficulty: 800 (Easy)
// Tags: math

#include <bits/stdc++.h>
using namespace std;

int main() {
    int t,x,y,n,rem,ans;
    cin>>t;

    for(int i=0;i<t;i++) {
        cin>>x>>y>>n;

        rem=n%x;

        if(rem==y) {
            cout << n << endl;
        }

        else if (rem>y) {
         ans = n-(rem-y);
            cout << ans << endl;
        }

        else {
            ans = n+(y-rem) - x;
            cout << ans << endl;
        }
        
    }

    return 0;
}
