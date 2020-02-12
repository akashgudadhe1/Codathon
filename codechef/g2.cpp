#include<iostream>
#include<vector>
using namespace std;

int main(void){
    vector<int> fib(60);

    fib[0] = 0;fib[1] = 1;

    for(int i = 2; i<60; i++)
        fib[i] = (fib[i-1] + fib[i-2]) % 10;

    int t;
    cin>>t;

    while(t--){

        long long n;
        cin >> n;

        long long p = 1LL;

        while(p*2LL <= n){ p *= 2LL;}
        cout << fib[(--p)%60] << "\n";
    }
    return 0;
}
