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

        int n,m;
        cin>>n>>m;
        vi a(n),b(n);
        for(int i = 0; i<n;i++){
            cin>>a[i];
        }
        for(int i = 0; i<n;i++){
            cin>>b[i];
        }
        vi chek = a;
        sort(all(a));
        sort(all(b));
        //cout<<"b"<<endl;for(int x: b)cout<<x<<" ";cout<<endl;
        vi add;
        for(int i = 0; i<n;i++){
            add.push_back(b[i]-a[0]);
        }
        for(auto &x: add){
            if(x<0){
                x+=m;
            }
        }
       // for(auto x: add)cout<<x<<" ";cout<<endl;
        int x = INT_MAX;
        for(int i = 0; i<add.size();i++){
                for(int j = 0; j<n;j++){
                    chek[j]+=add[i];
                    chek[j]%=m;
                }
                sort(all(chek));
                if(chek==b){
                    x = min(x,add[i]);
                }
                chek = a;
        }
        cout<<x<<endl;




return 0;
}




