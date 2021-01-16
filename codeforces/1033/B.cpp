#pragma comment (linker,"/STACK:16777216")
#include "bits/stdc++.h"
using namespace std;
typedef unsigned long long ll;
#define all(v) (v).begin(),(v).end()
#define endl "\n"
const int maxn = 200005;
const int mod = 1000000007;

//Calculate ( a*b ) %c
ll mulmod(ll a,ll b,ll c)
{
    ll x = 0 , y = a%c ;
    while(b>0)
    {
        if(b%2) x = (x+y)%c ;
        y=(y*2)%c;
        b/=2;
    }
    return x%c ;
}

//Calculate ( a^b ) %c
ll modulo(ll a,ll b,ll c)
{
    ll x = 1 , y = a%c ;
    while( b > 0 )
    {
        if(b%2) x = mulmod(x,y,c) ;
        y=mulmod(y,y,c);
        b/=2;
    }
    return x%c ;
}

bool miller(ll p, int  iteration=50)
{
    if(p<2) return false ;
    if(p%2==0&&p!=2) return false ;

    ll s = p-1 ;
    while(s%2==0) s/=2;

    for(ll i=1;i<=iteration;i++)
    {
        ll a = rand() % (p-1)+1 , temp = s ;

        ll mod = modulo(a,temp,p);
        while(mod!=1&&mod!=p-1&&temp!=p-1)
        {
            mod = mulmod(mod,mod,p);
            temp*=2;
        }
        if(temp%2==0&&mod!=p-1) return false ;
    }
    return true ;
}
void task(){
    ll a, b; cin >> a >> b;
    if(a-b>1){
        cout << "NO"<<endl;
        return;
    }
    ll ans = a+b;
    if(miller(ans))cout << "YES"<<endl;
    else cout << "NO" << endl;   
}

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
#ifdef OJ
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
    int T = 1; cin >> T;
    for(int __ = 1; __ <= T; __++){
        //cout <<"Case "<<__<<": ";
        task();
    }
      
return 0;
}