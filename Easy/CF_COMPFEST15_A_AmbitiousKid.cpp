// COMPFEST 15 Preliminary Online Mirror A - Ambitious Kid
// Difficulty: 800 (Easy)
// Tags: math

#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin>>n;
    set <int> s;
    for(int i=0;i<n;i++) {
        int x;
        cin>>x;
        if (x<0) {
            x=-x;
        }
        s.insert(x);
    }
    cout<< *(s.begin());
    cout<<endl;
    return 0;
}
