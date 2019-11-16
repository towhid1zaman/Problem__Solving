#include "bits/stdc++.h"
using namespace std;
typedef long long ll;
typedef vector<int> vi;
typedef vector<ll> vll;
typedef pair <int, int> pii;
typedef vector<pii>vip;
#define all(v) (v).begin(),(v).end()
#define sp(k) cout<<setprecision(k)<<fixed;
#define rep(i,a,b) for(int i =(a); i <=(b); ++i)
#define minv(v) *min_element(v.begin(),v.end())
#define maxv(v) *max_element(v.begin(),v.end())
#define each(it,s) for(auto it = s.begin(); it != s.end(); ++it)
#define unq(v) sort(all(v)),(v).erase(unique((v).begin(),(v).end()),(v).end())
#define getpos(v,x) (lower_bound(v.begin(),v.end(),x)-v.begin())
#define endl "\n"
#define F first
#define S second
#define pb push_back
#define mp make_pair
const double pi = acos(-1.0);
const int mod = 1000000007; // (int)1e9+7
const int maxn = 200100;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    cerr.tie(nullptr);
//    freopen("input.txt", "r", stdin);
//    freopen("output.txt", "w", stdout);
    int  n;
    cin>>n;
    vi v(n);
    rep(i,0,n-1){
        cin>>v[i];
    }
    vi res;
    set<int>chek,ans;
    rep(i,0,n-1){
        int t = v[i];
        if(t>0){
            if(chek.count(t)){
                if(ans.size()>0){
                    cout<<"-1"<<endl;
                    return 0;
                }
                res.push_back(chek.size()*2);
                chek.clear();
                ans.clear();
            }
            else{
                chek.insert(t);
                ans.insert(t);
            }
        }
        else{
            t*=-1;
            if(ans.count(t)==0){
                cout<<"-1"<<endl;
                return 0;
            }
            ans.erase(t);
        }
        if(ans.size()==0){
                int sz  = chek.size();
            res.push_back(sz*2);
        chek.clear();
        ans.clear();
        }
    }
    if(ans.size()>0){
        cout<<"-1"<<endl;
        return 0;
    }
    else if(chek.size()>0){
        res.push_back(chek.size()*2);
    }
    int result = res.size();
    cout<<result<<endl;
    for(auto a: res){
        cout<<a<<" ";
    }
    cout<<endl;

return 0;
}




