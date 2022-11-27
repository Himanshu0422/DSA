import java.util.*;;

public class mergesort {
    public static int[] merge(int arr1[], int arr2[]){
        int n = arr1.length;
        int m = arr2.length;
        int arr3[] = new int[n+m];
        int i = 0, j = 0, k = 0;

        while(i < n && j < m){
            if(arr1[i] < arr2[j]){
                arr3[k] = arr1[i];
                i++;
                k++;
            }else{
                arr3[k] = arr2[j];
                j++;
                k++;
            }
        }
        while(i < n){
            arr3[k] = arr1[i];
            i++;
            k++;
        }
        while(j < m){
            arr3[k] = arr2[j];
            j++;
            k++;
        }
        return arr3;
    }
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int arr1[] = {5,9,11,17,21,36,41};
        int n = 7;
        int arr2[] = {1,3,7,13,17,39,47,50,60};
        int m = 9;
        
        int arr3[] = new int[m+n];
        arr3 = merge(arr1, arr2);

        for(int q = 0; q<arr3.length; q++){
            System.out.print(arr3[q] + " ");
        }
    }
}
