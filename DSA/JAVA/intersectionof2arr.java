import java.util.*;

public class intersectionof2arr {
    public static void main(String args[]) {
        HashMap<Integer,Integer>freq = new HashMap<>();
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt();
        for(int i = 0 ; i < n ; i++)
        {
          int temp =   sc.nextInt();
          if(!freq.containsKey(temp))
          {
              freq.put(temp,1);
          }else{
              freq.replace(temp,1+freq.get(temp));
          }
        }
        ArrayList<Integer>ls = new ArrayList<>();
        for(int i = 0 ; i < n ; i++)
        {
            int tempy = sc.nextInt();
            if(freq.containsKey(tempy) && freq.get(tempy)>0)
            {
                freq.replace(tempy,freq.get(tempy)-1);
                ls.add(tempy);
            }

        }
        Collections.sort(ls);
            System.out.print("[");
            for(int i = 0 ; i <  ls.size() ; i++)
            {
                    System.out.print(ls.get(i));
                    if(i<ls.size()-1)
                    {
                        System.out.print(", ");
                    }
            }   
          System.out.print("]");
    }
}