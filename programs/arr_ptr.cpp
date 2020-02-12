/*
 * Program :- To observe similarities between array and vector
 */

#include<iostream>
#include<algorithm>

using namespace std;

int main(){
  int arr[] = {100, 20, 30, 400};
  int *begin = &arr[0];
  int *end = &arr[0] + (sizeof(arr)/sizeof(int));

  cout<<&arr[0]+4;

  cout<<sizeof(arr)<<endl;
  cout<<sizeof(int)<<endl;

  sort(begin, end);
  
  for(; begin!=end; begin++){
    cout<<*begin<<endl;
  }

  return 0;	
}
