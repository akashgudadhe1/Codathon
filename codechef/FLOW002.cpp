/*
  https://www.codechef.com/problems/FLOW002
*/

#include <iostream>
using namespace std;

int main() {
    int t, a, b;
	cin>>t;
	
	for(int i=0; i<t; i++)
	{
	   cin>>a>>b;
	   cout<<a%b<<endl;
	}
	
	return 0;
}
