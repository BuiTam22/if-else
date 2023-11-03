#include <bits/stdc++.h>
using namespace std;
int main()
{
   long long  a,b,k,sum = 0; cin >> a >> b >> k;
   if((a)>=1 && b>=1 && k>=1)
   {
     if(k%2==0)
     {
        sum+=((k/2)*a - (k/2)*b);
     }
     else if(k%2!=0)
     {
        sum+=(((k/2)+1)*a  - (k/2)*b);
     }
     cout << sum;
    
   }
    return 0;
}