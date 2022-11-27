import java.util.*;;
public class validsub {
    public static void main(String[] args) {
        Stack<Integer>st = new Stack<>();
        int arr[] = {1,4,2,5,3};
        int n = arr.length;
        int count = 0;
        for(int i = 0; i<n; i++){
            while(!st.isEmpty() && arr[st.peek()] > arr[i]){
                int x = st.pop();
                count = count + (i-x);
            }
            st.push(i);
        }
        while (!st.isEmpty()) {
            count = count + (n - st.pop());
        }
        System.out.println(count);
    }
}