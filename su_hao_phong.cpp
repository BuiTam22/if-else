#include<bits/stdc++.h>
using namespace std;
int main()
{
    int c1, c2 ,c3 ,c4 ,c5 ;cin >> c1 >> c2 >> c3 >> c4 >> c5;
    int tmp = c1+c2+c3+c4+c5;
    if(tmp%5==0)
    {
        if(tmp == 0)
        cout << "-1";
        else
        cout << tmp/5;
    }
    else
    cout << -1;
    return 0;
}