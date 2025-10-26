// Codeforces Round 223 Div2 A - Sereja and Dima
// Difficulty: 800 (Easy)
// Tags: greedy, implementation, two pointers

#include <iostream>
#include <deque>
using namespace std;

int main() {
        int n;
        int countS=0,countD=0;
        cin>>n;
        deque<int> q;

        for(int i=0;i<n;i++) {
            int x;
            cin>>x;
            q.push_back(x);
        }

        for(int i=0;i<n;i++) {

          if (i & 1)

              if (q.front()>q.back()) {
                  countD=countD + q.front();
                  q.pop_front();
              }

              else {
                  countD=countD + q.back();
                  q.pop_back();
              }

          else

              if (q.front()>q.back()) {
                  countS=countS + q.front();
                  q.pop_front();
              }

              else {
                  countS=countS + q.back();
                  q.pop_back();
              }
        }

        cout<<countS <<" "<<countD<<endl;
    
        return 0;
}
