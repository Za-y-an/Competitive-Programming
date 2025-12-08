// Educational Codeforces Round 151 Div2 A - Forbidden Integer
// Difficulty: 800 (Easy)
// Tags: constructive algorithms, implementation, math, number theory

#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin>>t;

    while(t--) {
        int n,k,x;
        cin>>n>>k>>x;

        if (x==1 && k==1) {
            cout << "No" << endl;
        }

        else if (x!=1) {
            cout << "Yes" << endl;
            cout << n << endl;
            for (int i=1;i<=n;i++) {
                cout<<1<<" ";
            }
            cout<<endl;
        }

        else if ( k==2) {
            if (n%2==0) {
                cout<<"Yes" << endl;
                cout << n/2 << endl;
                for (int i=1;i<=n/2;i++) {
                    cout<<2<<" ";
                }
                cout<<endl;
            }

            else {
                cout<<"No" << endl;
            }

        }

        else {
            cout<<"Yes" << endl;
            cout << n/2  << endl;
            if (n%2==0) {
                for (int i=1;i<=n/2;i++) {
                    cout<<2<<" ";
                }
                cout<<endl;
            }

            else {
                
                cout << "3 ";

                for (int i=1;i<=n/2 - 1;i++) {
                    cout<<2<<" ";
                }

                cout<<endl;
            }
        }
    }

    return 0;
}
