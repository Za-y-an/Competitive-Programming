// Codeforces Beta Round 57 Div2 A - Ultra-Fast Mathematician
// Difficulty: 800 (Easy)
// Tags: implementation

#include <stdio.h>

int main() {
    char s[101],s1[101];

    scanf("%s",s);
    scanf("%s",s1);

    for(int i=0;s[i]!='\0';i++) {

        if(s[i]==s1[i])
            printf("0");

        else
            printf("1");

    }

    printf("\n");
    return 0;

}
