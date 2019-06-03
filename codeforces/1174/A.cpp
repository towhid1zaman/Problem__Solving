#include "bits/stdc++.h"
using namespace std;
typedef long long LL;
#define nl "\n"
#define X first
#define Y second

#define MAX INT_MAX
#define pb(a) push_back(a)
#define mp(a,b) make_pair(a,b)

#define gcd(a,b) __gcd(a,b)
#define lcm(a,b) a*(b/gcd(a, b))

#define check() {printf("OK\n");}
#define srt(v) sort(v.begin(),v.end())
#define rev(v) reverse(v.begin(),v.end())

#define mem(a,x) memset(a,x,sizeof(a))
#define rep(i, n) for(int i = 0; i < (n); ++i)
#define rep1(i, n) for(int i = 1; i <= (n); ++i)
#define maxv(v) *max_element(v.begin(),v.end())
#define minv(v) *min_element(v.begin(),v.end())

#define each(it,s) for(auto it = s.begin(); it != s.end(); ++it)
#define f() {ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);}
#define unq(v) srt(v),(v).erase(unique((v).begin(),(v).end()),(v).end())
#define MOD 1000000007   // (int)1e9+7

///sortingstringbytheirlengthincreasingorder
bool ff(string s1,string s2){
    return s1.size()<s2.size();
}
///vector<string>s;sort(s.begin(),s.end(),ff)

int main(){f();
        int n;
        cin>>n;
        int N= n;
        n*=2;
        vector<int>v;
        set<int>s;
        rep(i,n)
        {
            int p;
            cin>>p;
            v.pb(p);
            s.insert(p);
        }
        LL s1=0;
        LL s2=0;
         srt(v);
        rep(i,N){
            s1+=v[i];
        }
        for(int i = N; i<n;i++){
            s2+=v[i];
        }
            //cout<<s1<<s2<<endl;
        if(s1==s2){
            cout<<-1<<nl;
            return 0;
        }
            rep(i,n){
                cout<<v[i]<<" ";
            }


return 0;
}


