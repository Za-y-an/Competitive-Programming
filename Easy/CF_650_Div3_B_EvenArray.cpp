// Codeforces Round 650 Div3 B - Even Array
// Difficulty: 800 (Easy)
// Tags: greedy, math

#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin>>t;

    for(int i=0;i<t;i++) {
        int n;
        cin>>n;
        int odd=0,even=0;
        vector<int> v(n);

        for(int j=0;j<n;j++) {
            cin>>v[j];

            if (j%2==0) {

                if (v[j]%2!=0) {
                    odd++;
                }

            }

            else {

                    if (v[j]%2==0) {
                        even++;
                    }

                }

            }

        if (odd==0 && even==0) {
            cout <<"0"<<endl;
            continue;
        }

        if (even == odd) {
            cout << even<<endl;
        }

        else {
            cout << "-1"<<endl;
        }
        
    }

    return 0;
}
