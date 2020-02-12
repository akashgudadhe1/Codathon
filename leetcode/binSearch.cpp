/*
 *  Program :- https://leetcode.com/problems/binary-search/
 */
#include<iostream>
#include<algorithm>
#include<vector>

using namespace std;

int main()
{
  int n, target;
  cin>>n;
  vector<int> v;

  for(int i=0; i<n; i++)
  {
    int item;
    cin>>item;

    v.push_back(item);  
  }

  cin>>target;
  sort(v.begin(), v.end());

  int low = 0, high = n-1, mid;   
  int found=0;

  while(low<=high)
  {
    mid = (low+high)/2;
	  
    if(target==mid)
    {
      found=1;
      break;
    }else if(target<v.at(mid))
    {
      high = mid-1;
    }else 
    {
      low = mid+1; 
    }
  }

  if(found==1)
	 cout<<"Found"<<endl;
  else
	 cout<<"Found"<<endl;  
   

  return 0;	
}
