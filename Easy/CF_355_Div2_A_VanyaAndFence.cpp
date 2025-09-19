// Codeforces Round 355 Div2 A - Vanya and Fence
// Difficulty: 800 (Easy)
// Tags: implementation

#include <iostream>
using namespace std;

int main() {
    int n;
    cin>>n;

    int h;
    cin >> h;
    int w=0;
    for (int i = 0; i < n; i++) {
        int a;
        cin >> a;
        if (a>h)
            w+=2;
        else
            w++;

    }
    cout<<w;
    cout<<"\n";
    return 0;

}
