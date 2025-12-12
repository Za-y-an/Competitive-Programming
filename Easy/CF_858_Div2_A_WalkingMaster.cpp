// Codeforces Round 858 Div2 A - Walking Master
// Difficulty: 800 (Easy)
// Tags: geometry, greedy, math

#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin>>t;

    while(t--) {

        int a,b,c,d;
        cin>>a>>b>>c>>d;

        int x,y;

        if (d<b) {
            cout <<-1<<endl;
            continue;
        }

        y=d-b;
        x=c-a;

        if (c>a && y<x) {
            cout <<-1<<endl;
            continue;
        }

        a=a+y;
        int move= y+ (a-c);

        cout<<move<<endl;

    }

    return 0;
}
