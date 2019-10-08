#include "bits/stdc++.h"
using namespace std;
typedef unsigned long long ll;
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
const int N = 200010;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    cerr.tie(nullptr);
    int q;
    cin>>q;
    ll h,n;
    while(q--)
    {
        cin>>h>>n;
        vll v;
        map<ll,ll>mup;
        rep(i,1,n){
           ll x;
            cin>>x;
           mup[x]=1;
           v.push_back(x);
        }
        ll chek = h;
        ll result = 0;
        mup[0]=1,mup[-1]=1,mup[-2]=1;
        rep(i,0,n-1)
        {
            if(v[i]>=chek){
                continue;
            }
            else if(v[i]+1==chek){
                if(mup[chek-2]==0)
                result++;
                chek-=2;
            }
            else{
                chek = v[i]+1;
                if(mup[chek-2]==0)
                result++;
                chek-=2;
            }
        }
        cout<<result<<endl;
    }
return 0;
}



