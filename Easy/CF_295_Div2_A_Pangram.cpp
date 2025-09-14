// Codeforces Round 295 Div2 A - Pangram
// Difficulty: 800 (Easy)
// Tags: implementation, strings

#include <iostream>
#include <string>
#include <unordered_set>
using namespace std;

int main() {
    int n;
    cin >> n;
    string s;
    cin >> s;
    unordered_set<char> setsmall;

    for (int i = 0; i < s.size(); i++) {
        if (s[i] > 'Z')
        s[i]=s[i]- 32;
            setsmall.insert(s[i]);
    }
    if (setsmall.size() == 26) {
        cout<<"YES"<<endl;
    }
    else {
        cout<<"NO"<<endl;
    }
    return 0;

}
