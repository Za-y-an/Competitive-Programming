// Codeforces Round 892 Div2 A - United We Stand
// Difficulty: 800 (Easy)
// Tags: constructive algorithms, math, number theory

#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin>>t;

    while(t--) {
        int n;
        cin>>n;
        set <int> s;
        multiset<int> ms;

        for(int i=0;i<n;i++) {
            int x;
            cin>>x;
            s.insert(x);
            ms.insert(x);
        }

        if (s.size()==1) {
            cout <<"-1"<<endl;
        }

        else {
            auto it = ms.end();
            --it;
            int x=*it;
            int count=ms.count(x);
            ms.erase(x);
            cout << ms.size()<<" "<<count<<endl;

            for (auto it = ms.begin(); it != ms.end(); it++) {
                cout <<*it <<" ";
            }

            cout <<endl;

            for (int z=1;z<=count;z++) {
                cout << x << " ";
            }
            
            cout <<endl;

        }
    }

    return 0;
}
