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
    int a1,a2,k1,k2,n;
    cin>>a1>>a2>>k1>>k2>>n;
    if(k1>k2){
        swap(a1,a2);
        swap(k1,k2);
    }
    int res1 = n-a1*(k1-1)-a2*(k2-1);
    int mn = max(0,res1);
    int mx = min(a1,n/k1);
    int res2 = n-mx*k1;
    res2 = res2/k2;
    mx+=res2;
    cout<<mn<<" "<<mx<<endl;

return 0;
}







