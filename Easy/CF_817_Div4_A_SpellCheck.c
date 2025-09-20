// Codeforces Round 817 Div4 A - Spell Check
// Difficulty: 800 (Easy)
// Tags: implementation

#include <stdio.h>

int main() {
    int t,n;
    int T,I,m,u,r;

    scanf("%d",&t);

    for(int i=0;i<t;i++) {
        T=0,I=0,m=0,u=0,r=0;

        scanf("%d",&n);

        if (n!=5) {
            char s[n+1];
            scanf("%s",s);
            printf("NO\n");
        }

        else {
            char s[n+1];
            scanf("%s",s);

            for (int k=0;k<n;k++) {
                if (s[k]=='T')
                    T=1;
                else if (s[k]=='i')
                    I=1;
                else if (s[k]=='m')
                    m=1;
                else if (s[k]=='u')
                    u=1;
                else if (s[k]=='r')
                    r=1;
            }

            if ( T==1 && I==1 && m==1 && u==1 && r==1) {
                printf("YES\n");
            }

            else
                printf("NO\n");

        }
    }

    return 0;
}
