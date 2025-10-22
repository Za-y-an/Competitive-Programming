// Codeforces Round 784 Div4 A - Division?
// Difficulty: 800 (Easy)
// Tags: implementation

#include <stdio.h>

int main() {
    int t,x;
    scanf("%d", &t);

     for (int i = 0; i < t; i++) {
         scanf("%d", &x);

         if (x>1899)
             printf("Division 1\n");

         else if (x>1599)
             printf("Division 2\n");

         else if (x>1399)
             printf("Division 3\n");

         else
             printf("Division 4\n");

     }

    return 0;
}
