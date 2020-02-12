#include<iostream>
using namespace std;

int main()
{
  int n, count=0;
  cin>>n;

  int arr[n], cnt[n];

  for(int i=0; i<n; i++)
  {
    cin>>arr[i];
    cnt[i]=-1;
  }

  for(int i=0; i<n; i++)
  {
    count=1;
    for(int j=i+1; j<n; j++)
    {
       if(arr[i]==arr[j])
       {
         cnt[i]++;

       }
    }
    if(cnt[i]!=0)
    {
      =count;
    }
  }

  for(int i=0; i<n; i++)
  {

      cout<<arr[i]<<" : "<<cnt[i]<<endl;

  }

  return 0;
}
