// Codeforces Round 871 Div4 B - Blank Space
// Difficulty: 800 (Easy)
// Tags: implementation

#include <iostream>
#include <vector>
using namespace std;

int main() {
    int t;
    cin>>t;

    while(t--) {
        int n,count=0,max=0;
        cin>>n;
        vector<int> v(n);

        for(int i=0;i<n;i++) {
            cin>>v[i];

            if(v[i]>0) {
                count=0;
                continue;
            }

            count++;

            if (max<count)
                  max=count;
            
        }

        cout<<max<<endl;
    }

    return 0;
}
