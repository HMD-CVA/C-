#include <bits/stdc++.h>
using namespace std;
long long int kt(long long int n)
{
    long long int i = 0;
    while(i*i <= n)
    {
        if(i*i == n)
        {
            cout << 1 << endl;
            return 0;
        }
        i++;
    }
    cout << 0 << endl ;
}
int main(){
    long long int n,t;
    cin >> t;
    for (long long int i=1;i<=t;i++)
    {
        cin >> n;
        kt(n);
    }
}
