/*
 *  https://www.codechef.com/problems/XCODE01
 */

#include<iostream>

using namespace std;

int main()
{
  int Test;
  cin>>Test;

  while(Test--)
  {
    long int N;	  
    cin>>N;

    int F0 = 0, F1=1, fNext=0;
    
    for(int i=1; i<=N; ++i)
    {
      if(i==1)
      {
	if(F0 == N)
	{
          cout<<"Yes";
	  break;
	}	
        cout<<F0<<" ";
	continue;
      }
      if(i==2)
      {
	if(F1 == N)
	{
          cout<<"Yes";
	  break;
	}	
        cout<<F1<<" ";
	continue;
      }

      fNext = F0 + F1;
      F0 = F1;
      F1 = fNext;

      if(fNext == N)
      {
        cout<<"Yes";
      }else{
         cout<<"No";
      }

      cout<<fNext<<" ";
    }    

  }

  return 0;	
}
