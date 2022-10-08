import java.util.Scanner;

public class index {
    public static void main(String[] args) {
        // int n = 5;

        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt();

        int arr[] = new int[n];
        for (int i = 0; i < n; i++) {
            arr[i] = sc.nextInt();
        }

        for(int i = 0; i<n; i++){
            for(int j = i; j < n; j++){
                for(int k = i; k<=j; k++){
                    System.out.print(arr[i]+" ");
                }
                System.out.println();
            }
        }
    }
}