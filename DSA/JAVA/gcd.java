import java.util.*;

public class gcd {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt();
        int m = sc.nextInt();

        int r = Math.min(n, m);
        // int p = Math.max(m, n);
        while (r != 0) {
            if (n % r == 0 && m % r == 0) {
                break;
            }
            r--;
        }
        System.out.println(r);
    }
}