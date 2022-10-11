// import java.util.Scanner;

// public class index {
//     public static void main(String[] args) {
//         // int n = 5;

//         Scanner sc = new Scanner(System.in);
//         int n = sc.nextInt();

//         int arr[] = new int[n];
//         for (int i = 0; i < n; i++) {
//             arr[i] = sc.nextInt();
//         }

//         for(int i = 0; i<n; i++){
//             for(int j = i; j < n; j++){
//                 for(int k = i; k<=j; k++){
//                     System.out.print(arr[i]+" ");
//                 }
//                 System.out.println();
//             }
//         }
//     }
// }

import java.util.*;

public class index {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt();
        int arr[] = new int[n];
        for (int i = 0; i < n; i++) {
            arr[i] = sc.nextInt();
        }

        int ans[] = new int[n]; 
        int sum = 0;
        ans[0]++;
        for(int i = 0; i<n; i++){
            sum += arr[i];
            if(sum < 0) sum = -sum;
            sum = sum%n;
            ans[sum]++;
        }
        int a = 0;
        for(int i = 0; i<n; i++){
            int d = (ans[i]*(ans[i] - 1))/2;
            a += d;
        }
        System.out.println(a);
    }
}