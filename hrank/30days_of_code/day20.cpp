#include<bits/stdc++.h>

using namespace std;


int main() {
  /* Enter your code here. Read input from STDIN. Print output to STDOUT */
     int n, temp=0, swap_cnt = 0;
     cin>>n;

     int arr[n];
     for(int i=0; i<n; i++)
     {
       cin>>arr[i];
     }

     for(int i=0; i<n-1; i++)
     {
        bool swapped = false;
        for(int j=0; j<n-1-i; j++)
        {
            if(arr[j]>arr[j+1])
            {
                swapped = true;
                swap_cnt+=1;
                temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }

        if(!swapped)
        {
            break;
        }
     }

     cout<<"Array is sorted in "<<swap_cnt<<" swaps"<<endl;
     cout<<"First Element: "<<arr[0]<<endl;
     cout<<"Last Element: "<<arr[n-1]<<endl;

    return 0;
}
