#include<bits/stdc++.h>

using namespace std;

int main()
{
  int n;
  cin>>n;

  int arr[n];
  map<int, int> m1;

  for(int i=0; i<n; i++)
  {
    cin>>arr[i];
    m1[arr[i]] = i;
  }

  sort(arr, arr+n);

  for(int i=0; i<n; i++)
  {
    cout<<m1[arr[i]]<<" ";
  }

  return 0;
}