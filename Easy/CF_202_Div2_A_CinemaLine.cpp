// Codeforces Round 202 Div2 A - Cinema Line
// Difficulty: 1100 (Medium)
// Tags: greedy, implementation

#include <iostream>
#include <unordered_map>
using namespace std;

int main() {
    int n;
    cin >> n;
    unordered_map<int, int> ma_p;

    for (int i = 0; i < n; i++) {
        int a;
        cin >> a;

        if ( a==25) {
            ma_p[a]++;
        }

        else if ( a==50 && ma_p[25] >=1) {
            ma_p[a]++;
            ma_p[25]--;
        }

        else if ( a==100 ) {
            if ( ma_p[50] >= 1 && ma_p[25] >= 1 ) {
                ma_p[50]--;
                ma_p[25]--;
            }

            else if ( ma_p[50] == 0 && ma_p[25] >= 3 ) {
                ma_p[25]=ma_p[25]-3;
            }

            else {
                cout << "NO" << endl;
                return 0;
            }

        }

        else {
            cout << "NO" << endl;
            return 0;
        }
    }

    cout << "YES" << endl;
    return 0;
}
