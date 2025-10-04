// Codeforces Round 640 Div4 A - Sum of Round Numbers
// Difficulty: 800 (Easy)
// Tags: implementation, math

#include <bits/stdc++.h>
using namespace std;


long long pow(int n) {
    long long mul=1;
    for (int i = 1; i <= n; i++) {
        mul=mul*10;
    }

    return mul;
}


int main() {
    int t,n,temp,count,count1;
    cin>>t;

    for(int i=0;i<t;i++) {
        cin>>n;
        count=0;
        count1=0;
        temp=n;
        vector <int> v;

        while (temp!=0) {

            if (temp%10 !=0 ) {
                if (count == 0) {
                    v.push_back(temp%10);
                    count1++;
                }

                else {
                    v.push_back((temp%10)*pow(count));
                    count1++;
                }

            }

            temp=temp/10;
            count++;

        }

        cout << count1 << endl;

        for(int i=0;i<v.size();i++) {
            cout<<v[i]<<" ";
        }

        cout<<endl;
    }

    return 0;
}
