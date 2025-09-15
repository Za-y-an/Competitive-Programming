// Codeforces Round 211 Div2 A - Soroban
// Difficulty: 800 (Easy)
// Tags: implementation

#include <iostream>
#include <string>
using namespace std;

int main() {
    int n;
    cin >> n;

    if ( n== 0) {
        cout << "O-|-OOOO" << endl;
        return 0;
    }
    int temp=n;
    int rem;
    string s;
    for (int i = 1; temp !=0; i++) {
        s = "O-|-OOOO";
        rem=temp%10;
        temp=temp/10;
        switch (rem) {
            case 1: {
                s[3]='O';
                s[4]='-';
                cout << s << endl;
                break;
            }

            case 2: {
                s[3]='O';
                s[4]='O';
                s[5]='-';
                cout << s << endl;
                break;
            }

            case 3: {
                s[3]='O';
                s[4]='O';
                s[5]='O';
                s[6]='-';
                cout << s << endl;
                break;
            }
            case 4: {
                s[3]='O';
                s[5]='O';
                s[6]='O';
                s[7]='-';
                cout << s << endl;
                break;
            }

            case 5: {
                s[0]='-';
                s[1]='O';
                cout << s << endl;
                break;
            }

            case 6: {
                s[0]='-';
                s[1]='O';
                s[3]='O';
                s[4]='-';
                cout << s << endl;
                break;
            }

            case 7: {
                s[0]='-';
                s[1]='O';
                s[3]='O';
                s[4]='O';
                s[5]='-';
                cout << s << endl;
                break;
            }

            case 8: {
                s[0]='-';
                s[1]='O';
                s[3]='O';
                s[4]='O';
                s[5]='O';
                s[6]='-';
                cout << s << endl;
                break;
            }

            case 9: {
                s[0]='-';
                s[1]='O';
                s[3]='O';
                s[4]='O';
                s[5]='O';
                s[6]='O';
                s[7]='-';
                cout << s << endl;
                break;
            }

            case 10: {
                s[0]='-';
                s[1]='O';
                s[3]='O';
                s[4]='O';
                s[5]='O';
                s[6]='O';
                s[7]='O';
                s[8]='-';
                cout << s << endl;
                break;
            }

            default:
                cout << s << endl;

        }
    }

    return 0;
}
