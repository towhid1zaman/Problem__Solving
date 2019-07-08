#include "bits/stdc++.h"
using namespace std;
typedef long long LL;

LL nc2(LL n)
{
    return n*(n-1)/2;
}
int main(){

            LL n,m;
            cin>>n>>m;
            LL mx = nc2(n-m+1);
            LL mn = (n%m)*nc2(n/m+1)+(m-(n%m))*nc2(n/m);

            cout<<mn<<" "<<mx;

    return 0;

}
