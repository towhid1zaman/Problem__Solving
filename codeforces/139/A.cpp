#include "bits/stdc++.h"
using namespace std;
typedef long long LL;
#define nl "\n"
#define X first
#define Y second

#define MAX INT_MAX
#define pb(a) push_back(a)
#define mp(a,b) make_pair(a,b)
#define check() {printf("OK\n");}
#define srt(v) sort(v.begin(),v.end())
#define rev(v) reverse(v.begin(),v.end())

#define mem(a,x) memset(a,x,sizeof(a))
#define rep(i, n) for(int i = 0; i < (n); ++i)
#define rep1(i, n) for(int i = 1; i <= (n); ++i)
#define rep2(i,a,b) for(int i =(a); i <=(b); ++i)
#define maxv(v) *max_element(v.begin(),v.end())
#define minv(v) *min_element(v.begin(),v.end())

#define each(it,s) for(auto it = s.begin(); it != s.end(); ++it)
#define f() {ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);}
#define unq(v) srt(v),(v).erase(unique((v).begin(),(v).end()),(v).end())
#define MOD 1000000007   // (int)1e9+7

typedef vector <int> vi;
typedef pair <int, int> pii;
typedef vector<pii>vip;

int main(){f();


    int n;
    cin>>n;
    int mon,tues,wed,thurs,fri,sata,sun;
    cin>>mon>>tues>>wed>>thurs>>fri>>sata>>sun;
    int sum = 0;
    while(true)
    {
        sum+=mon;
        if(sum>=n){
            cout<<1<<nl;
            break;
        }
        sum+=tues;
        if(sum>=n){
            cout<<2<<nl;
            break;
        }
        sum+=wed;
        if(sum>=n){
            cout<<3<<nl;
            break;
        }
        sum+=thurs;
        if(sum>=n){
            cout<<4<<nl;
            break;
        }
        sum+=fri;
        if(sum>=n)
        {
            cout<<5<<nl;
            break;
        }
        sum+=sata;
        if(sum>=n){
            cout<<6<<nl;
            break;
        }
        sum+=sun;
        if(sum>=n){
            cout<<7<<nl;
            break;
        }
    }





return 0;
}


