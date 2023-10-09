import java.util.*;
public class Solution {
    public static List< Integer > nextGreaterPermutation(List< Integer > A) {
        // Write your code here
          int n = A.size();
          int index = -1;
        // first find the index 
        for(int i = n-2; i>=0; i--){
             if(A.get(i)<A.get(i+1)){
                 // index i is the break point
                 index = i;
                 break;
             }
        }
        // if there is no deep like [5,4,3,2,1]
        if(index == -1){
          // just reverse the whole list 
             Collections.reverse(A);
             return A;
        }

       // Step 2: Find the next greater element
        //         and swap it with arr[ind]:
          
          for(int i = n-1; i>=0; i--){
              if(A.get(i)>A.get(index)){
                  // swap it 
                  int temp = A.get(i);
                  A.set(i, A.get(index));
                  A.set(index, temp);
                  break;
              }
          }
          // Step 3: reverse the right half:
        List<Integer> sublist = A.subList(index + 1, n);
        Collections.reverse(sublist);

        return A;

    }
}
