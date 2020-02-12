/*
 * Program :- % operator implementation
 */

#include<iostream>

using namespace std;

int main(){
  int arr[] = {0, 1, 1, 2, 3, 5, 8, 13, 21};

  for(int i=1; i<9; i++){
    if(arr[i]==0){
      cout<<"0 \t";
    }	    
    else{
	cout<<arr[i]%10<<"\t";
    }	
  }

  return 0;	
}
