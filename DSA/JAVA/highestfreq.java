import java.util.*;
public class highestfreq {
    public static void main (String args[]) {
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt();
        HashMap<Integer,Integer>mp = new HashMap<>();
        for(int i = 0 ; i < n ; i++)
        {
            int x = sc.nextInt();
            if(!mp.containsKey(x))
            {
                mp.put(x,1);
            }else{
                mp.replace(x,mp.get(x)+1);
            }
        }
            int freq = 0;
            int ans = 0;
           for(HashMap.Entry<Integer,Integer>entry:mp.entrySet())
           {
               if(entry.getValue() > freq)
               {
                   freq = entry.getValue();
                   ans = entry.getKey();
               }
           }
           System.out.print(ans);
    }
}