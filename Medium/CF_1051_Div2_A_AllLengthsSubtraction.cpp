// Codeforces Round 1051 Div2 A - All Lengths Subtraction
// Difficulty: 1200 (Medium)
// Tags: two pointers

#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin>>t;
    int n;
    for(int i=0;i<t;i++) {
        cin>>n;
        vector<int> v(n);
        int max=-1;
        int index;
        for(int j=0;j<n;j++) {
            cin>>v[j];
            if(v[j]>max) {
                max=v[j];
                index=j;
            }
        }

        int low=index, high=index;

        for(int j=0;j<n;j++) {

          if (low>0 && v[low-1] == max)
              low = low-1;
            else if ((high<(n-1)) && (v[high+1] == max))
                high = high+1;

            for (int k=low;k<=high;k++) {
                v[k]--;
            }
            max--;
        }

        int light = 1;

        for(int j=0;j<n;j++) {
            if (v[j]!=0) {
                cout<< "NO" << endl;
                light = 0;
                break;
            }
        }

        if (light == 1)
        cout<<"YES"<<endl;
    }

    return 0;
}
