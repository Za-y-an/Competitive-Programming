// Codeforces Round 1059 Div3 B - Beautiful String
// Difficulty: 1000 (Easy-Medium)
// Tags: brute force, constructive algorithms

#include <bits/stdc++.h>
using namespace std;

int main() {

    int t,n ;
    cin>>t;
    string s;

    for(int i=0;i<t;i++) {

        cin >> n >> s;
        int count =0;
        vector <int> one;

        for( int j=0; j<n;j++){

         if (s[j]=='1') {
         count++;
         one.push_back(j+1);
         }

        }

        cout << count<< endl;

        if (count==0)
        continue;

        for (int k = 0; k < count;k++) {
        cout << one[k] <<" ";
        }

        cout  << endl;
        
         }

    return 0;
}
