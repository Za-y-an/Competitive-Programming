// Codeforces Round 273 Div2 B - Random Teams
// Difficulty: 1300 (Medium)
// Tags: combinatorics, constructive algorithms, greedy, math

import java.util.Scanner;

public class cp {
    public static void main(String[] args) {

        Scanner sc = new Scanner(System.in);
        long n,m;

        n = sc.nextLong();
        m = sc.nextLong();

        long x = n/m;
        long y = n%m;

        long max = (n-m+1) * (n-m)/2;
        long min = ((x *  (x-1) / 2)* (m-y)) + ( ( (x+1) * x / 2) * y);

        System.out.println(min + " " +  max);

    }
}
