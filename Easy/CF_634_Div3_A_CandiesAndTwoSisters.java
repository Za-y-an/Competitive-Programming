// Codeforces Round 634 Div3 A - Candies and Two Sisters
// Difficulty: 800 (Easy)
// Tags: math

import java.util.Scanner;

public class cp {
    public static void main(String[] args) {

        Scanner sc = new Scanner(System.in);

        int t,n,ans;
        t = sc.nextInt();

        for (int i = 0; i < t; i++) {
            n = sc.nextInt();

            if(n== 2 || n==1){
                System.out.println(0);
                continue;
            }

            if((n & 1) == 0){
                ans = (n-1)/2;
            }

            else{
                ans = n/2;
            }

            System.out.println(ans);
        }
    }
}
