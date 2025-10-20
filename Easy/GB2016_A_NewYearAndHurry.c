// Good Bye 2016 A - New Year and Hurry
// Difficulty: 800 (Easy)
// Tags: binary search, brute force, implementation, math

#include <stdio.h>

int main() {
    int n,k;
    
    scanf("%d %d",&n,&k);

    k=240-k;
    int count=0;
    int time=0;

    for(int i=1;i<=n;i++) {
      time=time+ i*5;

        if (time<=k) {
            count++;
        }

        else {
            break;
        }

    }

    printf("%d",count);
    printf("\n");

    return 0;
}
