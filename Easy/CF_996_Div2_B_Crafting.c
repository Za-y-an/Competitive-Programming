// Codeforces Round 996 Div2 B - Crafting
// Difficulty: 1000 (Easy)
// Tags: constructive algorithms, greedy, sorting

#include <stdio.h>

int main() {
    int t;
    scanf("%d",&t);
  
    for(int i=1;i<=t;i++) {
        int n;
        scanf("%d",&n);
        int array1[n],array2[n];
      
        for(int j=0;j<n;j++) {
            scanf("%d",&array1[j]);
        }
      
        for(int k=0;k<n;k++) {
            scanf("%d",&array2[k]);
        }
      
        int count=0,diff=0,batti=1,x=n;
      
        for(int m=0;m<n;m++){
          
            if(array1[m]<array2[m]){
                count++;
                x=m;
                diff=array2[m]-array1[m];
              
                if(count==2){
                   printf("No\n");
                   batti=0;
                   break;
                   }
            }
        }
      
         if(batti==0)
                continue;
      
        for(int l=0;l<n;l++) {
          
                if(l==x)
                continue;
          
                if(diff> (array1[l]-array2[l])) {
                    printf("No\n");
                   batti=0;
                   break;
                }
        }
      
        if(batti==1)
            printf("Yes\n");
    }

return 0;
}
