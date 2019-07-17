#include "bits/stdc++.h"
using namespace std;
typedef long long LL;
#define endl "\n"
#define F first
#define S second
#define MAX INT_MAX
#define pb(a) push_back(a)
#define mp(a,b) make_pair(a,b)
#define all(v) (v).begin(),(v).end()
#define pd(x,k) cout<<setprecision(k)<<fixed<<x<<endl;
#define rep(i, n) for(int i = 0; i < (n); ++i)
#define rep1(i, n) for(int i = 1; i <= (n); ++i)
#define rep2(i,a,b) for(int i =(a); i <=(b); ++i)
#define minv(v) *min_element(v.begin(),v.end())
#define maxv(v) *max_element(v.begin(),v.end())
#define each(it,s) for(auto it = s.begin(); it != s.end(); ++it)
#define f() {ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);}
#define unq(v) sort(all(v)),(v).erase(unique((v).begin(),(v).end()),(v).end())

const int mod = 1000000007; // (int)1e9+7
const int N = int(1e6) + 99;

int main(){
f();

        LL n,k;
        cin>>n>>k;
        LL res = 0;
        for(int i = 1; i<=n;i++)
        {
            res+=i;
            if(res-(n-i)==k){
                cout<<n-i<<endl;
                return 0;
            }
        }






return 0;
}


