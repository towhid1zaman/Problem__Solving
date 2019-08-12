//https://youtu.be/3I3l-x93kOY
#include "bits/stdc++.h"
using namespace std;
typedef long long ll;
typedef vector<int> vi;
typedef pair <int, int> pii;
typedef vector<pii>vip;
#define endl "\n"
#define F first
#define S second
#define pb push_back
#define mp make_pair
#define all(v) (v).begin(),(v).end()
#define sp(x,k) cout<<setprecision(k)<<fixed<<x<<endl;
#define rep(i, n) for(int i = 0; i < (n); ++i)
#define rep1(i, n) for(int i = 1; i <= (n); ++i)
#define rep2(i,a,b) for(int i =(a); i <=(b); ++i)
#define minv(v) *min_element(v.begin(),v.end())
#define maxv(v) *max_element(v.begin(),v.end())
#define each(it,s) for(auto it = s.begin(); it != s.end(); ++it)
#define IO ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define unq(v) sort(all(v)),(v).erase(unique((v).begin(),(v).end()),(v).end())
#define scan(n) scanf("%d", &n)
#define pin(n) printf("%d\n",n)
#define scanl(n) scanf("%lld", &n)
#define pll(n) printf("%lld\n",n)
const int mod = 1000000007; // (int)1e9+7
const int N = 10000;


int main(){
		IO
        string s;
        cin>>s;
        int a = 0,b=0;
        int n = s.size();
        int prefix_a[N]={0};
        int prefix_b[N]={0};
        int mx = 0;
        char s2[N];
        for(int i = 0; i<n;i++)
        {
            s2[i+1]=s[i];
        }

        for(int i = 1; i<=n;i++)
        {
            prefix_a[i] += prefix_a[i-1]+(s2[i]=='a');
            prefix_b[i] += prefix_b[i-1]+(s2[i]=='b');

        }
        for(int i = 1; i<=n;i++)
        {
            for(int j=i; j<=n;j++)
                {
                        mx = max(mx,prefix_a[n]-(prefix_a[j]-prefix_a[i-1])+(prefix_b[j]-prefix_b[i-1]));
                }
        }
        int ans = max(mx,max(prefix_a[n],prefix_b[n]));
        cout<<ans<<endl;


return 0;
}



