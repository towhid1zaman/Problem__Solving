#include "bits/stdc++.h"
using namespace std;
typedef long long ll;
typedef vector<int> vi;
typedef vector<ll> vll;
typedef pair <int, int> pii;
typedef vector<pii>vip;
#define pb push_back
#define all(v) (v).begin(),(v).end()
#define sp(k) cout<<setprecision(k)<<fixed;
#define rep(i,a,b) for(int i =(a); i <=(b); ++i)
#define minv(v) *min_element(v.begin(),v.end())
#define maxv(v) *max_element(v.begin(),v.end())
#define each(it,s) for(auto it = s.begin(); it != s.end(); ++it)
#define unq(v) sort(all(v)),(v).erase(unique((v).begin(),(v).end()),(v).end())
#define getpos(v,x) (lower_bound(v.begin(),v.end(),x)-v.begin())
#define endl "\n"
const int mod = 1000000007; // (int)1e9+7
const int N = 200100;

void solve()
{
    int n;
    string x,y;
    cin>>n>>x>>y;
    vector<pair<int,int>>res;
    vector<int>Char(27,0);
    for(int i = 0; i<n;i++){
        Char[x[i]-'a']++;
        Char[y[i]-'a']++;
    }
    for(int i = 0; i<26;i++)
    {
        if(Char[i]%2!=0)
        {
            cout<<"No"<<endl;
            return;
        }
    }
    for(int k = 0; k<n;k++)
    {
        int pos = -1;
        if(x[k] != y[k]){
            for(int i = k+1; i<n;i++){
                if(y[k]==x[i]){
                    pos = i;
                    break;
                }
            }
            if(pos != -1){
            swap(x[pos],y[k+1]);
            swap(x[k],y[k+1]);
            res.push_back({pos,k+1});
            res.push_back({k,k+1});
        }
        else{
            for(int i = k+1; i<n;i++){
                if(y[k]==y[i]){
                    pos = i;
                }
            }
            swap(x[k],y[pos]);
            res.push_back({k,pos});
        }
    }
}
    cout<<"Yes"<<endl;
    cout<<res.size()<<endl;
    for(int i = 0; i<res.size();i++){
        cout<<res[i].first+1<<" "<<res[i].second+1<<endl;
    }
}
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    cerr.tie(nullptr);
    int q;
    cin>>q;
    while(q--){
        solve();
    }


return 0;
}




