/*
   https://www.codechef.com/problems/SPIRAL
*/


#include<iostream>

using namespace std;


int main()
{
   int t;
   cin>>t;

   for(int i=0; i<t; i++)
   {
     int rows, cols;
     cin>>rows>>cols;

     int arr[rows][cols];

     for(int i=0; i<rows; i++)
     {
       for(int j=0; j<cols; j++)
       {
         cin>>arr[i][j];
       }
     }

     int top=0,left=0, bottom=rows-1, right=cols-1;
     int dir=1;

     while(top<=bottom && left<=right)
     {
           for(int i=left; i<=right; ++i)
  	       {
              cout<<arr[top][i]<<" ";
  	       }
  	       top++;
  	    
           for(int i=top; i<=bottom; ++i)
  	       {
              cout<<arr[i][right]<<" ";
  	       }
  	       right--;
  	       
  	       if(top<=bottom)
  	       {
  	          for(int i=right; i>=left; --i)
  	          {
                cout<<arr[bottom][i]<<" ";
  	          }
  	          bottom--;
  	       }
  	       if(left<=right)
  	       {
      	       for(int i=bottom; i>=top; --i)
      	       {
                  cout<<arr[i][left]<<" ";
      	       }
      	       left++;
  	       }
     }
     
     cout<<endl;
   }
}
