// Codeforces Round 964 Div4 A - A+B Again?
// Difficulty: 800 (Easy)
// Tags: implementation, math

import java.util.Scanner;

public class cp{
    public static void main(String[] args) {

        Scanner sc = new Scanner(System.in);
        int t = sc.nextInt();
        int n,sum;

        for(int i=0;i<t;i++) {
            n = sc.nextInt();
            sum = n%10 + (n/10)%10;
            System.out.println(sum);
            }

        }
    }
