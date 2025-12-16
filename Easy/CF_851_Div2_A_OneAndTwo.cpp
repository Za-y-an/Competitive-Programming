// Codeforces Round 851 Div2 A - One and Two
// Difficulty: 800 (Easy)
// Tags: brute force, implementation, math

#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin>>t;

    while(t--) {
        int n;
        cin>>n;
        vector<int> v(n);

        int two=0;

        for(int i=0;i<n;i++) {

            cin>>v[i];

            if (v[i] == 2)
                two++;
        }

        int light =0;
        int i;
        int tempTwo=0;

        for(i=0;i<n-1;i++) {

            tempTwo = 0;

            for(int j=0;j<=i;j++) {

             if(v[j] == 2) {
                 tempTwo++;
             }

            }

            if(tempTwo == two-tempTwo) {
                light++;
                cout<<i+1<<endl;
                break;
            }

        }

        if (light == 0)
            cout<<-1<<endl;
        
    }

    return 0;
}
