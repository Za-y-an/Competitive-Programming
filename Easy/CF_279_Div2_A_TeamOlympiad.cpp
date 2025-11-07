// Codeforces Round 279 Div2 A - Team Olympiad
// Difficulty: 800 (Easy)
// Tags: greedy, implementation, sortings

#include <bits/stdc++.h>
using namespace std;

int main() {
    int n ;
    cin>>n;
  
    vector <int> v1;
    vector <int> v2;
    vector <int> v3;
    vector <int> v(n);
  
    for(int i=0;i<n;i++) {
       cin >> v[i];
      
     if (v[i]== 1)
      v1.push_back(i+1);
       
      else if (v[i]== 2)
      v2.push_back(i+1);
        
      else
      v3.push_back(i+1);
      
    }
  
    int min= v1.size();
  
    if ( v2.size() >= v3.size() ) 
     min= (v3.size() <min) ? v3.size(): min;
    
    else
     min= (v2.size() <min) ? v2.size(): min;
     
     if ( v1.size()>0 && v2.size() >0 && v3.size ()>0 ) {
     cout << min << endl;
       
     for(int k=0; k<min;k++) {
     cout << v1[k] << " "<< v2[k] << " "<< v3[k] << endl;
     }
     
     }
       
     else {
     cout << 0 << endl;
     }
  
     return 0;
}
