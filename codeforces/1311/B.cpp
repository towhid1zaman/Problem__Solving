#include "bits/stdc++.h"
using namespace std;
typedef long long ll;
typedef unsigned long long ull;
typedef vector<int> vi;typedef vector<ll> vll;
#define fill(a) memset(a, 0, sizeof (a))
#define all(v) (v).begin(),(v).end()
#define sp(k) cout<<setprecision(k)<<fixed;
#define rep(i,a) for(int i=0; i<a;i++)
#define rep1(i,a,b) for(int i=(a);i<=(b);++i)
#define irep(i,b,a) for(int i=(b);i>=(a);--i)
#define minv(v) *min_element(v.begin(),v.end())
#define maxv(v) *max_element(v.begin(),v.end())
#define each(it,s) for(auto it = s.begin(); it != s.end(); ++it)
#define unq(v) sort(all(v)),(v).erase(unique((v).begin(),(v).end()),(v).end())
#define getindi(v,x) (lower_bound(v.begin(),v.end(),x)-v.begin())
#define _ios ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define endl "\n"
#define ff first
#define ss second
#define pb push_back
#define sz(x) (int)x.size()

const double pi = acos(-1.0);
const int mod = 1000000007; // (int)1e9+7
const int maxn = 2000100;

int main(){
        _ios;
        int T;cin>>T;
        while(T--){
            int n,m;cin>>n>>m;
            vi a(n),b(m);
            rep(i,n)cin>>a[i];
            rep(i,m)cin>>b[i];
            vector<int>ans;
            rep(k,n){
                int indi=-1;
                int mx=INT_MAX;
                for(int i=k+1;i<n;i++){
                    if(a[i]<a[k] && a[i]<mx){
                        indi=i;
                        mx=a[i];
                    }
                }
                if(indi==-1)
                    continue;
                    for(int i=indi;i>k;i--){
                        swap(a[i],a[i-1]);
                        ans.pb(i);
                    }
            }
            bool flag=false;
            for(auto x : ans){
                bool chek=false;
                for(auto y : b){
                    if(x==y){
                        chek=true;break;
                    }
                }
                if(!chek){
                    cout<<"NO"<<endl;
                    flag=true;break;
                }
            }
            if(flag==false){
                cout<<"YES"<<endl;
            }

        }




return 0;
}





