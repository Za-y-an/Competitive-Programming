// Codeforces Round 849 Div4 A - Codeforces Checking
// Difficulty: 800 (Easy)
// Tags: implementation, strings

import java.util.Scanner;

public class cp {

    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);

        int t;
        char a;
        t = sc.nextInt();

        for(int i=0;i<t;i++) {

         a=sc.next().charAt(0);

         if(a=='c'||a=='o'||a=='d'||a=='e'||a=='f'||a=='r'||a=='s') {
        	 System.out.println("Yes");
         }

         else {
        	 System.out.println("No");
         }

        }
    }
}
