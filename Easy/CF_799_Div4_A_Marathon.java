// Codeforces Round 799 Div4 A - Marathon
// Difficulty: 800 (Easy)
// Tags: implementation

import java.util.Scanner;

public class cp {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);

        int t,a,b,c,d;
        t = sc.nextInt();

        for(int i=0;i<t;i++) {

            a = sc.nextInt();
            b = sc.nextInt();
            c = sc.nextInt();
            d = sc.nextInt();
            int count = 0;

            if(a<b) {
                count++;
            }

            if(a<c) {
                count++;
            }

            if(a<d) {
                count++;
            }

            System.out.println(count);
        }
    }
}
