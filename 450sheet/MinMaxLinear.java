public class MinMaxLinear{
    static class Pair{
        int min;
        int max;
    }

    static Pair getMinMax(int arr[], int low, int high){
        Pair minMax = new Pair();

        //if there is only one element in array
        if(low==high){
            minMax.min=arr[low];
            minMax.max=arr[low];
            return minMax;
        }

        //if more than two
        if(arr[0]>=arr[1]){
            minMax.max=arr[0];
            minMax.min=arr[1];
        }else{
            minMax.max=arr[1];
            minMax.min=arr[0];
        }

        for(int i=2; i<=high; i++){
            if(arr[i]>minMax.max){
                minMax.max=arr[i];
            }else if(arr[i]<minMax.min){
                minMax.min=arr[i];
            }
        }

        return minMax;
    }

    public static void main(String[] args) {
        int arr[] = {2, 1};

        Pair minMax = getMinMax(arr, 0, arr.length-1);
        System.out.println("Max "+minMax.max);
        System.out.println("Min "+minMax.min);
    }
}