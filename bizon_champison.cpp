#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    int a1, a2, a3, b1, b2, b3, n; cin  >> a1 >> a2 >> a3 >> b1 >> b2 >> b3 >> n;  
    int cup = a1+a2+a3, hc = b1+b2+b3, sum1 = cup/5 + min(1, cup%5), sum2 = hc/10 + min(1, hc%10);
    if(sum1+sum2<=n)
    cout << "YES";
    else
    cout << "NO";

    return 0;
}