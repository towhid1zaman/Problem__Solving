#include "bits/stdc++.h"
using namespace std;
typedef long long ll;
typedef vector<int> vi;
typedef vector<ll> vll;
typedef pair <int, int> pii;
typedef vector<pii>vip;
#define all(v) (v).begin(),(v).end()
#define sp(x,k) cout<<setprecision(k)<<fixed<<x<<endl;
#define rep(i,a,b) for(int i =(a); i <=(b); ++i)
#define minv(v) *min_element(v.begin(),v.end())
#define maxv(v) *max_element(v.begin(),v.end())
#define each(it,s) for(auto it = s.begin(); it != s.end(); ++it)
#define unq(v) sort(all(v)),(v).erase(unique((v).begin(),(v).end()),(v).end())
#define endl "\n"
#define F first
#define S second
#define pb push_back
#define mp make_pair
const int mod = 1000000007; // (int)1e9+7
const int N = 30000;
bool f[N];
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    cerr.tie(nullptr);
    ll n;
    cin>>n;
    vll v(n);
    rep(i,1,n){
        cin>>v[i];
    }
            ll res1=0,res2=0,c1=0,c2=0;
            int f = 0;
            rep(i,1,n){
                if(v[i]>0){
                    if(f==1){
                        c1++;
                    }
                    else if(f==0){
                        c2++;
                    }
                }
                else if(v[i]<0){
                    if(f==0){
                        f=1;
                        c2++;

                    }
                    else if(f==1){
                        f=0;
                        c1++;
                    }
                }
                if(f==1){
                    res1+=c2;
                }
                else if(f==0){
                    res1+=c1;
                }
            }
            res2 = (1+n)*n/2-res1;
            cout<<res1<<" "<<res2<<endl;


return 0;
}







