/*
  https://www.codechef.com/problems/FCTRL2
*/

#include<iostream>

using namespace std;

int fact(int n)
{
  int fact = 1;

  for(int i=1; i<=n; i++)
  {
    fact = fact*i;
  }

  return fact;
}

int main()
{
  int t, ans;
  cin>>t;

  int arr[t];

  for(int i=0; i<t; i++)
  {
    cin>>arr[i];
  }


  for(int i=0; i<t; i++)
  {	  
    ans = fact(arr[i]);
    cout<<ans<<endl;
  }

  return 0;	
}
