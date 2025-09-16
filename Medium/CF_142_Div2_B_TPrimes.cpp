// Codeforces Round 142 Div2 B - T-primes
// Difficulty: 1300 (Medium)
// Tags: number theory, math, binary search, implementation

#include <iostream>
#include <set>
#include <unordered_set>
using namespace std;

int main() {
    int n;
    cin>>n;
    unordered_set<long long> s;
    s.insert(4);
    s.insert(9);
    for(long long  i=5;i<=1000000;i=i+2) {
        int batti =1;
        if ( i%3 ==0 ) continue;

        for (long long  j = 5 ; j * 1LL * j <= i; j=j+6) {
         if (i%j ==0 || i%(j+2) ==0) { batti =0; break;}
        }
        if (batti==1) {
            s.insert(i* 1LL * i);
        }

    }

    long long arr[n];
    for(int i=0;i<n;i++) {
        cin>>arr[i];
    }
    for (long long i=0;i<n;i++) {
        if (s.count(arr[i])) {
            cout << "YES" << endl;

        }
        else {
            cout << "NO" << endl;
        }
    }

return 0;
}
