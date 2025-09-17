// Codeforces Round 784 Div4 C - Odd/Even Increments
// Difficulty: 800 (Easy)
// Tags: greedy, implementation, math

import java.util.Scanner;

public class cp{
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int t = sc.nextInt();
        int n;
        boolean a ;

        for(int i=0;i<t;i++) {
            a = true;
            n = sc.nextInt();
            int[] arr = new int[n];
            arr[0] = sc.nextInt();
            arr[1] = sc.nextInt();

            boolean even = (arr[0] & 1) == 0;
            boolean odd = (arr[1] & 1) == 1;
            boolean evenT, oddT;

            for (int j = 2; j < n; j++) {
                arr[j] = sc.nextInt();

                if ((j & 1) == 0) {
                    evenT = (arr[j] & 1) == 0;
                    if (evenT != even)
                        a = false;
                } else {
                    oddT = (arr[j] & 1) == 1;
                    if (oddT != odd)
                        a = false;
                }

            }

            if (a) {
                System.out.println("YES");
            } else {
                System.out.println("NO");
            }

        }
    }
}
