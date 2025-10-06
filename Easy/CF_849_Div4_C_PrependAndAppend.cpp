// Codeforces Round 849 Div4 C - Prepend and Append
// Difficulty: 800 (Easy)
// Tags: implementation, two pointers

#include <bits/stdc++.h>
using namespace std;

int main() {
    int t,n;
    cin>>t;

    for(int i=0;i<t;i++) {
        string s;
        cin>>n;
        deque<int> v(n);
        cin>>s;

        for(int j=0;j<n;j++) {
            v[j]=s[j]-'0';
        }

        while (v.size()>0) {

            int k=0,j=v.size()-1;

            if (v[k] == 0 && v[j] == 1) {
                v.pop_front();
                v.pop_back();
            }

            else if ((v[k] == 1 ) && v[j] == 0) {
                v.pop_front();
                v.pop_back();
            }

            else {
                break;
            }

        }

        cout<<v.size()<<endl;
    }

    return 0;
}
