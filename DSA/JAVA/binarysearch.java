import java.util.*;

public class binarysearch {
    public static void binary(int arr[], int n, int x){
        int s = 0;
        int e = n-1;
        boolean flag = true;
        while(s < e){
            int mid = (s+e)/2;
            if(arr[mid] == x){
                System.out.println("True");
                flag = false;
                break;
            }else if(arr[mid] > x){
                e = mid-1;
            }else{
                s = mid+1;
            }
        }
        if(flag){
            System.out.println("False");
        }
    }
    public static void fisrtocc(int arr[], int n, int x){
        int s = 0;
        int e = n-1;
        boolean flag = true;
        int ans = n-1;
        while(s < e){
            int mid = (s+e)/2;
            if(arr[mid] == x){
                // System.out.println("True");
                ans = Math.max(ans, mid);
                flag = false;
                break;
            }else if(arr[mid] > x){
                e = mid-1;
            }else{
                s = mid+1;
            }
        }
        if(flag){
            System.out.println(-1);
        }else{
            System.out.println(ans);
        }
    }
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt();
        int arr[] = new int[n];
        for (int i = 0; i < n; i++) {
            arr[i] = sc.nextInt();
        }
        int x = sc.nextInt();
        binary(arr, n, x);
        fisrtocc(arr, n, x);
    }
}