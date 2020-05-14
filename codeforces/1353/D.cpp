
// </> : towhid1zaman

#include "bits/stdc++.h"
using namespace std;
typedef long long ll;
typedef vector<int> vi;
typedef vector<ll> vll;
typedef pair<int, pair<int,int>>pip;
#define fill(a,b) memset(a,b,sizeof(a))
#define all(v) (v).begin(),(v).end()
#define sp(k) cout<<setprecision(k)<<fixed;
#define rep(i,a) for(int i=0;i<a;i++)
#define rep1(i,a,b) for(int i=(a);i<=(b);++i)
#define irep(i,b,a) for(int i=(b);i>=(a);--i)
#define minv(v) *min_element(all(v))
#define maxv(v) *max_element(all(v))
#define unq(v) (v).erase(unique(all(v)),(v).end())
#define _ ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl "\n"
#define sqr(a) ((a)*(a))
#define sz(a) int(a.size())
#define ff first
#define ss second
#define pb push_back

const double pi = acos(-1.0);
const int mod = 1000000007; // (int)1e9+7
const int maxn = 2000100;

/// priority queue purpose
struct comp{
    bool operator()( pip &x ,  pip &y){
        if(x.ff==y.ff)return x.ss.ff > y.ss.ff;
        return x.ff < y.ff;
    }
};
int main(){
        _
        int T; cin >> T;
        while(T--){
            int n; cin>> n;
            vi a(n);
            priority_queue<pip, vector<pip>, comp>PQ;
            PQ.push({n,{0,n-1}});
            int x = 1;
            while(!PQ.empty()){
                pip u = PQ.top();
                PQ.pop();
                int f = u.ss.ff, s = u.ss.ss;
                int pos = (f+s)/2;
                a[pos] = x;
                if(f<=pos-1){
                    PQ.push({pos-f,{f,pos-1}});
                }
                if(pos+1<=s){
                    PQ.push({s-pos,{pos+1,s}});
                }
                x++;
            }
           for(auto v : a)cout<<v<<' ';cout<<endl;
        }


return 0;
}

