// Codeforces Round 404 Div2 A - Anton and Polyhedrons
// Difficulty: 800 (Easy)
// Tags: implementation, strings

import java.util.Scanner;

public class cp {
    public static void main(String[] args) {

        Scanner sc = new Scanner(System.in);
        long count=0;
        int n;
        n = sc.nextInt();

        String[] arr = new String[n];

        for(int i=0;i<n;i++){
            arr[i] = sc.next();

            if(arr[i].equals("Tetrahedron")){
                count=count+4;
            }

            else if(arr[i].equals("Cube")){
                count=count+6;
            }

            else if(arr[i].equals("Octahedron")){
                count=count+8;
            }

            else if(arr[i].equals("Dodecahedron")){
                count=count+12;
            }

            else if(arr[i].equals("Icosahedron")){
                count=count+20;
            }

        }

        System.out.println(count);

    }
}
