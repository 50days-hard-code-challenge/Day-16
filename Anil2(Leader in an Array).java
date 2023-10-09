import java.util.*;
public class Solution {
    public static List< Integer > superiorElements(int []a) {
        // Write your code here.
        int n = a.length;
       ArrayList<Integer> list = new ArrayList<>();
       // Last element in an array is always leader & push into it in list
       int leader = a[n-1];
       list.add(a[n-1]);
       for(int i = n-2; i>=0; i--){
           if(a[i]>leader){
               list.add(a[i]);
               // updatae the leader 
               leader = a[i];
           }
       }
       return list;
    }
}
