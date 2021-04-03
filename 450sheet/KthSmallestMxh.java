import java.util.*;

public class KthSmallestMxh{
    public static void main(String args[]){
        int arr[]={7, 10, 4, 3, 20, 15};
        int k=3; 
        PriorityQueue<Integer> maxh = new PriorityQueue<Integer>();
        for(int i=0; i<arr.length-1; i++){
            maxh.add(arr[i]);

            if(maxh.size() > k){
                maxh.remove();
            }
        }

        System.out.println("Kth "+k+" smallest "+maxh.peek());
    }
}