// Codeforces Round 937 Div4 A - Stair, Peak, or Neither?
// Difficulty: 800 (Easy)
// Tags: implementation

import java.util.Scanner;

public class cp {
    public static void main(String[] args) {

        Scanner sc = new Scanner(System.in);
        int t = sc.nextInt();
        int a, b, c;

        for (int i = 0; i < t; i++) {
            a = sc.nextInt();
            b = sc.nextInt();
            c = sc.nextInt();
            if (a < b && b > c) {
                System.out.println("PEAK");
            } else if (a < b && b < c) {
                System.out.println("STAIR");
            } else {
                System.out.println("NONE");
            }

        }
    }
}
