/*
 *  Program :- Static Stoarge class demonstration
 */

#include<iostream>

using namespace std;

int count_func(){
   static int count = 0;
   count++; 
 	
   return count;	
}

int main(){
 cout<<count_func()<<endl;
 cout<<count_func()<<endl;

 return 0;
} 
