/*
 *  Program :- register storage class demonstration
 */
#include<iostream>

using namespace std;

int main(){
 int a = 10;
   register int *ptr = &a;

  cout<<*ptr<<endl; 

  return 0;	
}
