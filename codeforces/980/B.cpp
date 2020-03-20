
// </> : towhid1zaman

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
const int maxn = 150;
int  ans[5][maxn];
int main(){
        _ios;

        int n, k; cin >> n >> k;
        fill(ans);
        int mid  = n/2;
        int left = mid-1, right = mid+1;
        while(k>=4){
            k-=4;
            ans[1][left]=ans[1][right] = 1;
            ans[2][left]=ans[2][right] = 1;
            left--;
            right++;
        }
        if(k==1){
                ans[1][mid] = 1;
        }
        else if(k==2){
                ans[1][mid]=ans[2][mid]=1;
        }
        else if(k==3){
            ans[1][left]=ans[1][right]=1;
            ans[1][mid]=1;
        }
        //ans always exists
        cout<<"YES"<<endl;
        rep(i,4){
            rep(j,n){
                if(ans[i][j])cout<<'#';
                else cout<<'.';
            }
            cout<<endl;
        }


return 0;
}






