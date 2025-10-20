// Codeforces Round 322 Div2 A - Vasya the Hipster
// Difficulty: 800 (Easy)
// Tags: implementation, math

#include <stdio.h>

int main() {
    int a,b,total;
    scanf("%d %d",&a,&b);

    total= (a+b)/2;

    if (a==b) {
        printf("%d 0",a);
    }
    else if (   a>b) {
        printf("%d ",b);
        printf("%d\n",total-b);
    }

    else {
        printf("%d ",a);
        printf("%d\n",total-a);
    }

 return 0;
}
