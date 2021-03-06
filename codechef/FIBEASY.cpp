/*
* Program :- https://www.codechef.com/SEPT19B/problems/FIBEASY
*/
#include <iostream>
#include<vector>
#include<cmath>

using namespace std;

void print_vect(vector<long long int> v){
  vector<long long int>::iterator itr = v.begin();
  for(itr; itr!=v.end(); itr++){
    cout<<*itr<<endl;
  }
}

int fibo(long long int n){
  long long int first=0, second=1, next, i;
  long long int arr[n];

  for(i=0; i<n; i++){
    if(i<=1){
      next = i;
    }else{
       next = first+second;
       first = second;
       second = next;
    }

    arr[i] = next%10;
  }
  int ans = pow(2, floor(log(n)));

  return arr[ans];
}


int main(int argc, char** argv){
  while (argv[0]){
    long long int n, answer;
    cin>>n;
    cout<<fibo(n)<<endl;
  }

  return 0;
}
