// Educational Codeforces Round 139 Div2 A - Extremely Round
// Difficulty: 800 (Easy)
// Tags: brute force, implementation

#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin>>t;

    while(t--) {
        int n;
        cin >> n;
        int count=0;
        int number = n;
        int last = 0;

        while(number!=0) {
            last = number;
            count++;
            number/=10;
        }

        cout<<((count - 1) * 9) + last <<endl;
    }

    return 0;
}
