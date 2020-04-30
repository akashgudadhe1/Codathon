#include<bits/stdc++.h>

using namespace std;

int main()
{
  int n;
  cin>>n;

  pair<int, int> p[n];

  for(int i=0; i<n; i++)
  {
    int num;
    cin>>num;
    p[i] = make_pair(num, i);
  }

  sort(p, p+n);

  for(int i=0; i<n; i++)
  {
    cout<<p[i].second<<" ";
  }

  return 0;
}