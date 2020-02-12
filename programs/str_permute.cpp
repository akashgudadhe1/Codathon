#include<iostream>
#include<cstring>
using namespace std;

void permute(string str, string chosen)
{
  if(str.length()==1)
  {
     cout<<str<<endl;
  }
  else
  {
     //choose
     //explore
     //unchoose
     for(int i=0; i<str.length(); i++)
     {
        char c = str[i];
        str.erase(i, 1);
        chosen.insert(i, 1, c);

        permute(str, chosen);

        chosen.erase(chosen.length()-1, 1);
        str.insert(i, 1, c);
     }
  }
}

int main()
{
  string str;
  cin>>str;

  permute(str, "");
  return 0;
}
