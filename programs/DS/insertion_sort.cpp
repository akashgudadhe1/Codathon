#include<iostream>

using namespace std;

int main()
{
  int  n, key=0;
  cin>>n;
  int arr[n];

  for(int i=0; i<n; i++)
  {
     cin>>arr[i];
  }
  int j=0; 

  for(int i=1; i<n; i++)
  {
     j=i-1;
     key = arr[i];

    while(j>=0 && arr[j]>key)
    {
      arr[j+1] = arr[j];
      j = j-1;
    } 

    arr[j+1] = key;
  }

  for(int j=0; j<n; j++)
  {
     cout<<arr[j]<<" ";
  }

 

  return 0;	
}
