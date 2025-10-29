// Codeforces Beta Round 32 Div2 B - Borze
// Difficulty: 800 (Easy)
// Tags: expression parsing, implementation

#include <stdio.h>

int main() {
    char str[201];
    scanf("%s", str);


    for (int i=0; str[i] != '\0'; i++) {

        if (str[i]=='.') {
            printf("0");
        }

        else if (str[i]=='-' && str[i+1]=='.') {
            printf("1");
            i++;
        }

        else {
            printf("2");
            i++;
        }

    }


    return 0;
}
