/*
 *  Program :- Bubble Sort Implementation
 */

#include<iostream>

using namespace std;

int main()
{
  int N, temp, flag=0;
  cin>>N;
  int arr[N];

  for(int i=0; i<N; i++)
  {
    cin>>arr[i];
  }

  //Bubble Sort Logic
  for(int i=0; i<N-1; i++)
  {
     flag = 0;

     for(int j=0; j<N-1-i; j++)
     {
        if(arr[j]>arr[j+1])
	{
           temp = arr[j];
      	   arr[j] = arr[j+1];
      	   arr[j+1] = temp;

           flag=1;
	}
     }

     if(flag==0)
     {
       break;
     }
  }


  for(int i=0; i<N; i++)
  {
    cout<<arr[i]<<" ";
  }

  return 0;
}
