#include "bits/stdc++.h"
using namespace std;
typedef long long LL;
#define nl "\n"
#define X first
#define Y second

#define MAX INT_MAX
#define pb(a) push_back(a)
#define mp(a,b) make_pair(a,b)
#define check() {printf("OK\n");}
#define srt(v) sort(v.begin(),v.end())
#define rev(v) reverse(v.begin(),v.end())

#define mem(a,x) memset(a,x,sizeof(a))
#define rep(i, n) for(int i = 0; i < (n); ++i)
#define rep1(i, n) for(int i = 1; i <= (n); ++i)
#define rep2(i,a,b) for(int i =(a); i <=(b); ++i)
#define maxv(v) *max_element(v.begin(),v.end())
#define minv(v) *min_element(v.begin(),v.end())

#define each(it,s) for(auto it = s.begin(); it != s.end(); ++it)
#define f() {ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);}
#define unq(v) srt(v),(v).erase(unique((v).begin(),(v).end()),(v).end())
#define MOD 1000000007   // (int)1e9+7


int main(){f();
            /*
            now using binary search,
            if K is equal to the mid position of the sequence then n will be
            the answer otherwise if K is greater, then K must be present in the right half of the sequence,
            so we will change our left limit to mid+1,
            else if K is smaller, we will change our right limit to mid-1 and in each iteration we will decrease n by one.
                */
		LL n,k;
		cin>>n>>k;
		LL z = pow(2,n)-1;
		LL x = 1;
		if(k%2==1)
        {
            cout<<1<<nl;
            return 0;
        }
        LL ans=0;
        while(true){
            LL y = (x+z)/2;
            if(k==y){
                ans = n;
                break;
            }
            else if(y>k){
                    z = y-1;
            }
            else{
                x = y+1;
            }
            n--;
        }
        cout<<ans<<endl;







return 0;
}


