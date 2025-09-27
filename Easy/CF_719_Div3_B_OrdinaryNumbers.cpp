// Codeforces Round 719 Div3 B - Ordinary Numbers
// Difficulty: 800 (Easy)
// Tags: brute force, math, number theory

#include <bits/stdc++.h>
using namespace std;

int main() {
    long long t,n,sum,light ;
    cin>>t;
    string s;

    for(int i=0;i<t;i++) {
        light = 1;
        cin>>n;
        sum=0;
        if (n<10) {
            cout << n << endl;
        }
        else {
            s= to_string(n);
            sum= (s.length() -1 ) * 9 + s[0] - '1';
            for (int i = 1; i < s.length(); i++) {
                if (s[i]> s[0])
                    break;
                if (s[i] < s[0]){
                    light = 0;
                    break;
                }
            }
            if (light == 0)
                cout << sum << endl;
            else
                cout << sum+1 << endl;

        }
    }
    return 0;
}


/* my another  solution with different approach:
 *
 * int main () {
    int t,n,temp,count,sum,dig,light;
    cin>>t;

    for(int i=0;i<t;i++) {
        cin>>n;
        count=0;
        sum=0;
        light =1 ;

        vector<int> v;

        if (n < 10) {
            cout<< n <<endl;
            continue;
        }


        temp=n;
            while(temp!=0) {
                v.push_back(temp%10);
                temp=temp/10;
                count++;
            }

            dig = *(v.end()-1);
        sum = (count - 1 ) * 9 + dig -1;

            for ( auto it = v.rbegin()+1; it != v.rend(); ++it) {

                if ( *it > dig) {
                   break;
                }

                if ( *it < dig) {
                    light = 0;
                    break;
                }

            }

            if (light == 0) {
                cout<< sum <<endl;
            }

            else {
                cout<< sum + 1 <<endl;
            }

    }

    return 0;
} */
