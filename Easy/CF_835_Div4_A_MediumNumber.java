// Codeforces Round 835 Div4 A - Medium Number
// Difficulty: 800 (Easy)
// Tags: implementation, sortings

import java.util.Scanner;

public class cp {

    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);

        int t,a,b,c;

        t = sc.nextInt();

        for(int i=0;i<t;i++) {

         a=sc.nextInt();
         b=sc.nextInt();
         c=sc.nextInt();

        if( (a>b && a<c) || (a<b && a>c))
               System.out.println(a);
        else if( (b>a && b<c) || (b<a && b>c))
               System.out.println(b);
        else
               System.out.println(c);
        }
    }
}
