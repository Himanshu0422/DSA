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

// import java.util.*;

// public class index {
//     public static void main(String[] args) {
//         Scanner sc = new Scanner(System.in);
//         int n = sc.nextInt();
//         int arr[] = new int[n];
//         for (int i = 0; i < n; i++) {
//             arr[i] = sc.nextInt();
//         }

//         int ans[] = new int[n]; 
//         int sum = 0;
//         ans[0]++;
//         for(int i = 0; i<n; i++){
//             sum += arr[i];
//             if(sum < 0) sum = -sum;
//             sum = sum%n;
//             ans[sum]++;
//         }
//         int a = 0;
//         for(int i = 0; i<n; i++){
//             int d = (ans[i]*(ans[i] - 1))/2;
//             a += d;
//         }
//         System.out.println(a);
//     }
// }

// import java.util.*;

// public class index {
//     public static void main(String[] args) {
//         Scanner sc = new Scanner(System.in);
//         int n = sc.nextInt();
//         int m = sc.nextInt();

//         int arr[][] = new int[n][m];

//         for(int i = 0; i<n; i++){
//             for(int j = 0; j<m; j++){
//                 arr[i][j] = sc.nextInt();
//             }
//         }

        // for(int i = 0; i<n; i++){
        //     for(int j = 0; j<m; j++){
        //         System.out.print(arr[i][j]);
        //         System.out.print(" ");
        //     }
        //     System.out.println();
        // }
        
//         for (int i = 0; i < n; i++) {
//             int p = i;
//             int s = 0;
//             while(p >= 0){
//                 System.out.print(arr[p][s]);
//                 System.out.print(" ");
//                 p--;
//                 s++;
//             }
//             System.out.println();
//         }
//         for(int i = 1; i<m; i++){
//             int p = n-1;
//             int s = i;
//             while(s < m){
//                 System.out.print(arr[p][s]);
//                 System.out.print(" ");
//                 p--;
//                 s++;
//             }
//             System.out.println();
//         }
//     }
// }

import java.util.*;

public class index{
    public static void main(String[] args) {
        System.out.println("Hello World");
    }
}