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
#define irep(i,b,a) for(int i=(b);i>(a);--i)
#define minv(v) *min_element(v.begin(),v.end())
#define maxv(v) *max_element(v.begin(),v.end())
#define each(it,s) for(auto it = s.begin(); it != s.end(); ++it)
#define unq(v) sort(all(v)),(v).erase(unique((v).begin(),(v).end()),(v).end())
#define getpos(v,x) (lower_bound(v.begin(),v.end(),x)-v.begin())
#define _ios ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define endl "\n"
#define sqr(a) ((a)*(a))
#define sz(a) int(a.size())
#define ff first
#define ss second
#define pb push_back

const int INF = 1e9 + 10;
const double pi = acos(-1.0);
const int mod = 1000000007; // (int)1e9+7
const int maxn = 40020;


ll resa[maxn];
ll resb[maxn];
ll a[maxn];
ll b[maxn];
int main(){
        _ios;
        for(int i=0; i<40021; i++){
                resa[i] = resb[i] = 0;
        }
        int n,m,k; cin >> n >> m >>k;
        rep(i,n)cin >> a[i];
        rep(i,m)cin >> b[i];
        int pos1 = 0;
        int pos2 = 0;
        while(pos1<n){
                pos2 = pos1;
                while(pos2<n){
                    if(a[pos2] == 0){
                            break;
                    }
                    pos2++;
                }
                if(pos2 != pos1){
                    int sum = pos2 - pos1;
                    int chek = 1;
                    irep(i,sum,0){
                        resa[i] += chek;
                        chek++;
                    }
                }
                pos1 = pos2 +1;
            }
            pos2=pos1=0;
            while(pos1<m){
                pos2 = pos1;
                while(pos2<m){
                    if(b[pos2] == 0){
                            break;
                    }
                    pos2++;
                }
                if(pos2 != pos1){
                    int sum = pos2 - pos1;
                    int chek = 1;
                     irep(i,sum,0){
                        resb[i] += chek;
                        chek++;
                    }
                }
                pos1 = pos2+1;
            }
            ll res = 0;
            int  len = sqrt(k);
            int y,maxi1,maxi2;
            rep1( i,1,len){
                if(k%i == 0) {
                    y = k/i,maxi1 = max(i,y),maxi2 = max(n,m);
                    if(maxi1<=maxi2){
                        res =( res+(resa[i] * resb[y]));
                        if(i!=y){
                                res =(res+ (resa[y] * resb[i]));
                        }
                    }
                }
            }
            cout<<res<<endl;




return 0;
}




