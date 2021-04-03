public class ArrRev{
    static void reverseArray(int arr[], int start, int end){
        int temp;
        while(start<end){
            temp=arr[start];
            arr[start]=arr[end];
            arr[end]=temp;
            start++;
            end--;
        }

        for(int i=0; i<=end; i++){
            System.out.println(arr[i]);
        }
    }

    public static void main(String args[]){
        int arr[]={1, 2, 3, 4, 5, 6};
        int start=0;
        int end=5;

        reverseArray(arr, start, end);
    }
}