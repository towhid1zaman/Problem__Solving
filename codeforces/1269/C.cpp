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
int res[maxn];
int chek[maxn];
int main(){
    _ios;

    int n,k;
    cin>>n>>k;
    string s;
    cin>>s;
    for(int i = 0; i<n;i++){
        res[i+1] = s[i]-'0';
    }
    for(int i = 1; i<=k;i++){
        chek[i] = res[i];
    }
    for(int i = k+1; i<=n;i++){
        chek[i] = chek[i-k];
    }
    bool ok = true;
    for(int i = 1; i<=n;i++){
        if(chek[i]>res[i])break;
        else{
            if(chek[i]<res[i]){
                ok = false;
                break;
            }
        }
    }
    if(!ok){
        for(int i = k; i>=1;i--){
            if(chek[i]<9){
                chek[i]++;
                break;
            }
            else chek[i] = 0;
        }
        for(int i =k+1; i<=n;i++){
            chek[i] = chek[i-k];
        }
    }
    //for(int i = 1; i<=n;i++)cout<<chek[i]<<" ";cout<<endl;
    cout<<n<<endl;
    for(int i = 1; i<=n;i++){
        cout<<chek[i];
    }
    cout<<endl;




return 0;
}




