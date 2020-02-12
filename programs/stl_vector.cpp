/*
 * Author :- Akash Gudadhe
 * Program :- STL Vector Implementation
 */

#include<iostream>
#include<vector>

using namespace std;

int main(){
 
   //Vector Declaration	
   vector<int> v;

   //Adding Elements to the vector
   v.push_back(10);
   v.push_back(20);
   v.push_back(30);
   v.push_back(40); 

   //Iterator Declaration
   vector<int>::iterator itr = v.begin(); 

   for(; itr!=v.end(); itr++){
      cout<<"values : "<<*itr<<endl;
   }

   cout<<"Size = "<<v.size()<<endl;

   v.clear();

   //Vector Size after clear
   cout<<"Size after clear() = "<<v.size()<<endl;

  return 0;	
}
