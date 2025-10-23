// Codeforces Round 377 Div2 A - Buy a Shovel
// Difficulty: 800 (Easy)
// Tags: brute force, constructive algorithms, implementation, math

#include <stdio.h>

int main() {
    int k,r,count=1;
    scanf("%d %d",&k,&r);
    long long p=(long long) k;

    while (1) {
        
        if ( (p%10 == 0 )|| ((p-r)%10 == 0)) {
            printf("%d\n",count);
            return 0;
        }

        p=p+k;
        count++;

    }

}
