#include "bits/stdc++.h"
using namespace std;
typedef long long ll;
typedef unsigned long long ull;
typedef vector<int> vi;typedef vector<ll> vll;
#define fill(a) memset(a, 0, sizeof (a))
#define all(v) (v).begin(),(v).end()
#define sp(k) cout<<setprecision(k)<<fixed;
#define rep(i,a,b) for(int i=(a);i<=(b);++i)
#define irep(i,b,a) for(int i=(b);i>=(a);--i)
#define minv(v) *min_element(v.begin(),v.end())
#define maxv(v) *max_element(v.begin(),v.end())
#define each(it,s) for(auto it = s.begin(); it != s.end(); ++it)
#define unq(v) sort(all(v)),(v).erase(unique((v).begin(),(v).end()),(v).end())
#define getpos(v,x) (lower_bound(v.begin(),v.end(),x)-v.begin())
#define _ios ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define endl "\n"
#define ff first
#define ss second
#define pb push_back

int dx4[] = {0,0,1,-1};
int dy4[] = {1,-1,0,0};
int dx8[] = {0,0,1,1,1,-1,-1,-1};
int dy8[] = {1,-1,1,-1,0,0,-1,1};

const double pi = acos(-1.0);
const int mod = 1000000007; // (int)1e9+7
const int maxn = 200100;

int main(){
        _ios;

        int T;
        cin>>T;
        rep(z,1,T){

               ll n,m;
               cin>>n>>m;
               vll v(n+1);
               rep(i,1,n){
                    ll a;
                    cin>>a;
                    v[a] = i;
               }
               ll res = 0,lastPos = -1;
               //vll vm(m+1);
               rep(i,0,m-1){
                    ll a;
                    cin>>a;
                    if(lastPos == -1){
                        lastPos = v[a];
                        res += (2*(v[a]-1) ) + 1;
                    }
                    else if(v[a]<lastPos){
                        res+=1;
                    }
                    else{
                        lastPos= v[a];
                        res += ( 2*(v[a]- i-1) )+1;

                    }
               }
               cout<<res<<endl;

        }



return 0;
}




