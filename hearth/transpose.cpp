/*
* Program :- https://www.codechef.com/SEPT19B/problems/FIBEASY
*/
#include <iostream>
#include<cmath>

using namespace std;

void fibo(long long int n){
  long long int first=0, second=1, next, i;
  long long int arr[n];


  float val = log2(n);
  float ans = floor(val);

  int ans2 = pow(2, ans)-1;

  if(ans==val){
    n = n-1;
  }
  else
     n = int(ans2);

  cout<<"n "<<n<<endl;

  for(i=0; i<n+1; i++)
  {
    if(i<=1){
      next = i;
    }else{
       next = first+second;
       first = second;
       second = next;
    }

    arr[i] = next%10;
  }

  for(int i=0; i<n+1; i++)
  {
      cout<<i<<" : "<<arr[i]<<endl;
  }

  //cout<<arr[n]<<endl;
}

int main(){
  int t;
  cin>>t;
  while (t--){
    long long int n, answer;
    cin>>n;
    fibo(n);
  }

  return 0;
}
