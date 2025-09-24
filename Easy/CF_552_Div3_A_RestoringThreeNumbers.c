// Codeforces Round 552 Div3 A - Restoring Three Numbers
// Difficulty: 800 (Easy)
// Tags: math

#include <stdio.h>
int main (){
    int x1,x2,x3,x4,a,b,c;
    scanf("%d %d %d %d",&x1,&x2,&x3,&x4);
    if(x4>=x1 && x4>=x2 && x4>= x3){
    a=-(x4-x1-x2);
    b=x1-a;
    c=x3-b;
    }
    else if(x2>=x4 && x2>=x3 && x2>=x1){
         a=-(x2-x1-x3);
    b=x1-a;
    c=x3-a;
    }
    else if(x1>=x2 && x1>=x3 && x1>=x4){
        a=-(x1-x2-x3);
    b=x2-a;
    c=x3-a;
    }
    else if(x3>=x1 && x3>=x2 && x3>=x4){
        a=-(x3-x1-x2);
    b=x1-a;
    c=x2-a;
    }
    printf("%d %d %d\n",a,b,c);
    return 0;
}
