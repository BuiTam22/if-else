#include <bits/stdc++.h>
using namespace std;
#define ll long long 
int main()
{
   ll n,m ; cin >> n>> m;
   if(n>0 && n%2==0)
   {
    for(ll i=n/2; i<=n; i++)
    {
        if(i%m==0)
        {
            cout << i << endl;
        }
    }
   }
   else if(n>0 && n%2!=0)
   {
    for(ll i=(n/2)+1; i<=n; i++)
    {
        if(i%m==0)
        {
            cout << i << endl;
        }
    }
   }
   else if(m==1 && m==n)
   {
    cout << 1;
   }
   else
   {
    cout << -1;
   }

}