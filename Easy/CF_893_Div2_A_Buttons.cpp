// Codeforces Round 893 Div2 A - Buttons
// Difficulty: 800 (Easy)
// Tags: games, greedy, math

#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin>>t;

    while (t--) {

        int a,b,c;
        cin>>a>>b>>c;
        int anna=a;
        int katie=b;

        if (c & 1) {
            katie=katie + (c/2);
            anna= anna + (c- c/2);
        }

        else {
            katie=katie + (c/2);
            anna= anna + c/2;
        }

        if ( anna <= katie) {
            cout << "Second" << endl;
        }

        else {
            cout << "First" << endl;
        }

    }

    return 0;

}
