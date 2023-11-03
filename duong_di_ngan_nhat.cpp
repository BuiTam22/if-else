#include<bits/stdc++.h>
using namespace std;
int main()
{
  long long d1,d2,d3,d4; cin >> d1 >> d2 >> d3;
  long long c1 = d1+d2+d3, c2 = 2*d1+2*d2, c3 = 2*d1+2*d3, c4 = 2*d2+2*d3;
  long long ketqua = min({c1,c2,c3,c4});
  cout << ketqua;
  return 0;
}