/*
  https://www.codechef.com/problems/CSUM
*/

#include <iostream>
using namespace std;

int main() {
   int T;
   cin>>T;
   
   while(T--)
   {
       int N;
       long long int K;
       cin>>N>>K;
       
       long long int arr[N];
       int ans[N];
       
       for(int i=0; i<N; i++)
       {
           cin>>arr[i];
       }
       
       for(int i=0; i<=N-1; i++)
       {
           int count=0;
           if( (arr[i]+arr[i+1]) == K)
           {
               count++;
           }
           
           if(count==1)
           {
               ans[i]=1;
               count++;
           }
           else if(arr[i+1]==N)
           {
               ans[i]=0;
               count++;
           }
       }
       
       int size = sizeof(ans)/sizeof(ans[0]);
       for(int i=0; i<size; i++)
       {
           if(ans[i]==1){
               cout<<"Yes"<<endl;
           }else{
               cout<<"No"<<endl;
           }
       }
   }
   
   return 0;
}
