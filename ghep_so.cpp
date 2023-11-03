#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long k2, k3, k5, k6; cin >> k2 >> k3 >> k5 >> k6;
    long long value1 = min({k2, k5, k6});
    long long value2 = k2 - value1;
    long long ans = value1*256;
    if(value1 == k2)
    cout << ans;
    else if(value1 != k2 && value2 >= k3)
    {
        cout << ans + k3 * 32;
    }
    else if(value1 != k2 && value2 < k3)
    {
        cout << ans + value2 * 32;
    }
    return 0;
}