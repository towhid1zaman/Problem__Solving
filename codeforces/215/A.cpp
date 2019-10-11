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
const int N = 200010;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    cerr.tie(nullptr);
    int n;
    cin>>n;
    vi a(n);
    for(int i = 0; i<n;i++){
        cin>>a[i];
    }
    int m;
    cin>>m;
    vi b(m);
    for(int i = 0; i<m;i++){
            cin>>b[i];
    }
    vi ans;
    for(int i = 0; i<n;i++){
        for(int j = 0; j<m;j++){
            int x = b[j] / a[i];
            int mud = b[j]%a[i];
            if(mud==0){
                ans.push_back(x);
            }
        }
    }
    sort(all(ans));
    int chek = ans[ans.size()-1];
    int res = 0;
    for(auto x: ans){
        if(x==chek)res++;
    }
    cout<<res<<endl;




return 0;
}



