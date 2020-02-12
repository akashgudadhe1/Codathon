/*
 * Program :- https://www.codechef.com/SEPT19B/submit/FIBEASY  Easy Fibonacci
 */

#include <bits/stdc++.h>
using namespace std;

int main()
{
   int long t, n, k;
   int ans[] = {0,9,2,3};
   cin >> t;

   while(t--)
   {
     cin >> n;
     if (n == 1) {cout <<0<<endl;}
     else if( n < 4) {cout << 1 <<endl;}
     else if( n < 8) {cout << 2 << endl;}
     else if( n < 16) {cout << 3 << endl;}
     else
     {
       k = 0;
       while(n > 1)
       {
         k = k + 1;
         n = n / 2;
       }
       cout << ans[k % 4] << endl;
     }
   }
   return 0;

}
