#include<iostream>
#include<cstring>

using namespace std;

void permute(string s, string chosen)
{
   if(s.empty())
   {
      cout<<chosen<<endl;
   }else{
      for(int i=0; i<s.length(); i++)
      {
        char c = s[i];
        chosen.insert(i, 1, c);
        s.erase(i, 1);

        permute(s, chosen);

        s.insert(i, 1, c);
        chosen.erase(chosen.length()-1, 1);
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
