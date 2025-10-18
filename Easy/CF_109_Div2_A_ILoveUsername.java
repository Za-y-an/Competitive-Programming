// Codeforces Round 109 Div2 A - I_love_%username%
// Difficulty: 800 (Easy)
// Tags: brute force

import java.util.Scanner;

public class cp {
    public static void main(String[] args) {

        Scanner sc = new Scanner(System.in);

        int n,temp,max,min,count=0;
        n = sc.nextInt();

        int[] arr = new int[n];

        temp = sc.nextInt();
        arr[0] = temp;

        if(n==1){
            System.out.println(0);
            return;
        }

        max =min = temp;

        for (int i = 1; i < n; i++) {

            temp = sc.nextInt();
            arr[i] = temp;

            if(arr[i]<min){
                min = arr[i];
                count++;
            }

            if(arr[i]>max){
                max = arr[i];
                count++;
            }

        }

        System.out.println(count);
    }
}
