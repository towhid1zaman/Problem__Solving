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
#define maxv(v) *max_element(v.begin(),v.end())
#define minv(v) *min_element(v.begin(),v.end())

#define each(it,s) for(auto it = s.begin(); it != s.end(); ++it)
#define f() {ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);}
#define unq(v) srt(v),(v).erase(unique((v).begin(),(v).end()),(v).end())
#define MOD 1000000007   // (int)1e9+7
vector<int>kora;
vector<int>x[200005];
vector<int>col;
int n;
void graph(int v,int c)
    {
        col[v] = c;
        if(c==0){
            n++;
        }
        kora[v] = 1;
        for(int i = 0; i<x[v].size();i++)
        {
            int into = x[v][i];
            if(kora[into]==0){
                graph(into,1-c);
            }
        }
    }
int main(){f();
	int tt;
	cin>>tt;
	while(tt--)
    {
        int p,q;
        cin>>p>>q;
        kora.resize(0);
        kora.resize(p+1,0);
        col.resize(0);
        col.resize(p+1,0);
        rep1(i,p){
            x[i].resize(0);
        }
        rep1(i,q){
            int a,b;
            cin>>a>>b;
            x[a].pb(b);
            x[b].pb(a);
        }
        n = 0;
        graph(1,0);
        vector<int>res;
        if(n>p/2){
            cout<<p-n<<nl;
            rep1(i,p){
                if(col[i]==1){
                    cout<<i<<' ';
                }
            }
        }
        else{
            cout<<n<<nl;
            rep1(i,p){
                if(col[i]==0){
                    cout<<i<<' ';
                }
            }
        }
        cout<<nl;
    }
return 0;
}

