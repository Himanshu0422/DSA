import java.util.*;

public class stack {
    public static void main(String[] args) {
        int arr[] = {1,5,4,8,2,7,9};
        Stack<Integer>st = new Stack<>();
        // st.push(-1);
        int n = arr.length;
        // int ans[] = ;
        // for(int i = n-1; i> 0; i--){
        //     if(st.peek() > arr[i]){
        //         ans[i] = st.peek();
        //         st.push(arr[i]);
        //     }else{

        //     }
        // }
        int ans[] = new int[arr.length];
        for(int i = 0; i<n; i++){
            while(!st.isEmpty() && arr[st.peek()] < arr[i]){
                int x = st.pop();
                ans[x] = arr[i];
            }
            st.push(i);
        }
        
    }
}
