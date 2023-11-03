#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long a,b,c,n; cin >> a >> b >> c >>  n;
    long long tmp = (a+b+c+n)/3;
    if((a+b+c+n)%3==0)
    {
        if(tmp >= a && tmp >= b && tmp >= c)
        cout << "YES";
        else
        cout << "NO";
    }
    else
    cout << "NO";
    return 0;
}