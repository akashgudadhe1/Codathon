#include<iostream>
#include<string.h>

using namespace std;

int main()
{
   string str1 = "akash";
   int len = str1.length();

   for(int i=0; i<len; i++)
   {
     for(int j=1; j<=len; j++)
     {
        cout<<str1.substr(i, j)<<"\n";
     }
   }

   return 0;	
}
