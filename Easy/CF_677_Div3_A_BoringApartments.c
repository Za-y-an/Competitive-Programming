// Codeforces Round 677 Div3 A - Boring Apartments
// Difficulty: 800 (Easy)
// Tags: implementation, math

#include <stdio.h>

int main() {
    int t,n;
    int count;
    int digit;
    int dig;

    scanf("%d",&t);

    for (int i=1;i<=t;i++) {
        scanf("%d",&n);
        count=0;
        digit = 0;
        int temp=n;

        for (int j=1;temp!=0;j++) {
            temp=temp/10;
            digit=digit+j;
            dig = n%10;
        }

        count = ((dig-1)*10)+digit;
        printf("%d\n",count);

    }

    return 0;
}
