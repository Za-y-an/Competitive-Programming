// Codeforces Round 879 Div2 A - Unit Array
// Difficulty: 800 (Easy)
// Tags: greedy, math

import java.util.Scanner;

public class cp {

    public static void main(String[] args) {
        
        Scanner sc = new Scanner(System.in);
        int t,n;
        t = sc.nextInt();

        for(int i=0;i<t;i++) {

            n  = sc.nextInt();
            int m=0;
            int p=0;

            for(int j=0;j<n;j++) {

                int x = sc.nextInt();

                if(x==-1)
                    m++;

                else
                    p++;
            }

            int count ;

            if(m<=p){

                if(m%2==0) {
                    System.out.println("0");
                }

                else {
                    System.out.println("1");
                }
            }

            else {

                count = m - p;

                if (count % 2 == 0) {

                    count = count / 2;
                    p = p + count;
                    m = m - count;

                    if (m % 2 == 0)
                        System.out.println(count);

                    else
                        System.out.println(count + 1);
                }

                else {
                    count = count / 2 + 1;
                    p = p + count;
                    m = m - count;

                    if (m % 2 == 0)
                        System.out.println(count);

                    else
                        System.out.println(count + 1);
                }
            }
        }
    }
}
