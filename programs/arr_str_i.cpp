#include<iostream>

using namespace std;

int main()
{
   int arr[26]={0};
   string str="hello";
   for(int i=0; str[i]!='\0'; i++)
   {
     arr[str[i]-'a']++;
    cout<<int(str[i])<<endl;
   } 


  return 0;	
}
