// Codeforces Round 806 Div4 A - YES or YES?
// Difficulty: 800 (Easy)
// Tags: brute force, implementation, strings

#include <stdio.h>

int main() {
   int t;
   char str[4];

   scanf("%d",&t);
   while(t--) {
      scanf("%s",str);
      if (str[0] != 'y' && str[0] !='Y') {
         printf("No\n");
         continue;
      }

      if (str[1] != 'e' && str[1] != 'E') {
         printf("No\n");
         continue;
      }

      if (str[2] != 's' && str[2] != 'S') {
         printf("No\n");
         continue;
      }

      printf("Yes\n");

   }

   return 0;
}
