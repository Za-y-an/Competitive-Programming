// Codeforces Round 667 Div3 A - Yet Another Two Integers Problem
// Difficulty: 800 (Easy)
// Tags: greedy, math

#include <stdio.h>
#include <stdlib.h>
int main() {

    int t,a,b,x,rem,res,ans;
    scanf("%d",&t);

    for(int i=0;i<t;i++) {
        scanf("%d %d",&a,&b);

        if (a==b) {
            printf("0\n");
            continue;
        }

        x= abs((a-b));
        rem=x%10;
        res=x-rem;

        if (rem!=0)
        ans=(res/10)+1;

        else
            ans=res/10;

        printf("%d\n",ans);
    }

    return 0;
}
