// Codeforces Round 886 Div4 A - To My Critics
// Difficulty: 800 (Easy)
// Tags: implementation, sortings

import java.util.Scanner;

public class cp {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);

        int t,a,b,c;
        t = sc.nextInt();

        for(int i=0;i<t;i++) {

            a = sc.nextInt();
            b = sc.nextInt();
            c = sc.nextInt();

            if(a+b>=10) 
                System.out.println("Yes");
            else if (a+c >= 10)
                System.out.println("Yes");
            else if(b+c >= 10)
                System.out.println("Yes");
            else
                System.out.println("No");

        }
    }
}
