//https://youtu.be/3I3l-x93kOY
#include "bits/stdc++.h"
using namespace std;
typedef long long ll;
typedef vector<int> vi;
typedef vector<ll> vll;
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
const int N = int(3e5) + 99;

int main(){
		IO
        ll t,n;
            cin>>t;
            while(t--)
            {
                cin>>n;

                ll chek=0;

                vll a(4*n);

                rep(i,4*n)  cin>>a[i];

                sort(all(a));

                ll ans=a[0]*a[4*n-1];

                ll l=0,r=4*n-1;

                while(l<r)
                {
                    if(a[l]!=a[l+1] || a[r]!=a[r-1])
                    {
                        chek=1;
                        break;
                    }
                    else
                    {
                        if(a[l]*a[r]!=ans)
                        {
                            chek=1;
                            break;
                        }
                    }
                    l+=2;
                    r-=2;
                }

                if(chek==1){
                        cout<<"NO"<<endl;
                }
                else     cout<<"YES"<<endl;
            }

return 0;
}


