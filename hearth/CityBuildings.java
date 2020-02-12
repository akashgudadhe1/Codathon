import java.util.*;
class CityBuildings {
    public static void main(String args[] ) throws Exception {
        Scanner sc = new Scanner(System.in);
        int N = sc.nextInt();
        long arr[] = new long[N];
        for(int i=0; i<N; i++)
            arr[i] = sc.nextLong();
        long out = solve(arr, N);
        System.out.println(out);
    }
    public static long solve(long[] arr, long N){
        
        long ans =0;
	
        long[][] testArr = new long[(int)N][2];
        String ansString = "";
        
        for(long i=0; i<N; i++)
        {
            long sqr = arr[i]*arr[i];
            
            for(long j=0; j<N; j++)
            {
                if(sqr == arr[j] && ansString != i+""+j)
                {
                   ans ++; 
                   ansString = i+""+j;
                }
            }
            
        }
        
        return ans;
    }
}
