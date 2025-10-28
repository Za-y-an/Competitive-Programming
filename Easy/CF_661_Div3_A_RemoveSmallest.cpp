// Codeforces Round 661 Div3 A - Remove Smallest
// Difficulty: 800 (Easy)
// Tags: greedy, sortings

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {

    int t,n,batti;
    cin>>t;

    for(int i=0;i<t;i++) {

        batti = 1;
        cin>>n;
        vector<int> v(n);

        for(int j=0;j<n;j++) {
            cin>>v[j];
        }

            if (n==1) {
                cout << "Yes" << endl;
                continue;
            }

            sort(v.begin(),v.end());

            for(int k=0;k<n-1;k++) {

                if(v[k] !=v[k+1] && ((v[k+1]-v[k])!=1)) {
                    cout << "No" << endl;
                    batti = 0;
                    break;
                }

            }

            if (batti == 1) {
                cout << "Yes" << endl;
            }


    }

    return 0;

}
