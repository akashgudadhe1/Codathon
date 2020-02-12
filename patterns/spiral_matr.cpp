#include<iostream>

using namespace std;


int main()
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
      if(dir==1)
      {
         for(int i=left; i<=right; ++i)
	 {
            cout<<arr[top][i]<<" ";
	 }
	 ++top;
	 dir=2;
      }
      else if(dir==2)
      {
         for(int i=top; i<=bottom; ++i)
	 {
            cout<<arr[i][right]<<" ";
	 }
	 --right;
	 dir=3;
      }
      else if(dir==3)
      {
         for(int i=right; i>=left; --i)
	 {
            cout<<arr[bottom][i]<<" ";
	 }
	 --bottom;
	 dir=4;
      }
      else if(dir==4)
      {
         for(int i=bottom; i>=top; --i)
	 {
            cout<<arr[i][left]<<" ";
	 }
	 ++left;
      }
   }
}
