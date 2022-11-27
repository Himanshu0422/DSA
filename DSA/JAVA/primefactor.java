import java.util.*;

public class primefactor {
    public static boolean isPrime(int n){
        for(int i = 2; i<=n/2; i++){
            if(n % i == 0){
                return false;
            }
        }
        return true;
    }
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt();
        
        // for(int i = 2; i<=n/2; i++){
        //     if(n%i == 0){
        //         if(isPrime(i)){
        //             System.out.println(i);
        //         }
        //     }
        // }

        for(int i = 2; i<=n; i++){
            if(n % i == 0){
                while(n % i == 0){
                    n = n/i;
                }
                System.out.print(i + " ");
            }
        }
    }
}
