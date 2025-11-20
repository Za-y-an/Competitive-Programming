// CodeTON Round 7 Div1+2 A - Jagged Swaps
// Difficulty: 800 (Easy)
// Tags: sortings

#include <bits/stdc++.h>
using namespace std;

int main() {

    int t,n;
    cin>>t;

    while(t--) {
      
        cin>>n;
        vector <int> v(n);
        
        for(int i=0; i<n; i++) {
        cin >> v[i];
        }
        
        if (v[0] == 1) {
        cout << "yes" << endl;
        }
        
        else {
        cout << "no" << endl;
        }
        
    }

    return 0;
}
