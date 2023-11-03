#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n,m;cin>>n>>m;
    int max = n, min = n/2;
    if(n>0 && m>0 && n%2==0)
    {
        for(int i=min; i<=max; i++)
        {
            if(i%m==0)
            {
                cout << i << endl;
                break;
            }
        }
    }
    else if(n>0 && m>0 && n%2!=0)
    {
        for(int i=min+1; i<=max; i++)
        {
            if(i%m==0)
            {
                cout << i << endl;
                break;
            }
        }
    }
    else
    {
        cout << -1;
    }
   
    return 0;
}