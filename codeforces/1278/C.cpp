#include "bits/stdc++.h"
using namespace std;
typedef long long ll;typedef unsigned long long ull;
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

int dx4[ ] = {0,0,1,-1};
int dy4[ ] = {1,-1,0,0};
int dx8[ ] = {0,0,1,1,1,-1,-1,-1};
int dy8[ ] = {1,-1,1,-1,0,0,-1,1};

const double pi = acos(-1.0);
const int mod = 1000000007; // (int)1e9+7
const int maxn = 200100;

int main(){
    _ios;
    int T;
    cin>>T;
    while(T--){
         int n;
         vi p,v;
           cin>>n;
           int jam[2*n+5];
           rep(i,1,2*n){
            cin>>jam[i];
           }
        rep(i,1,n){
            v.push_back(jam[i]);
        }
        rep(i,n+1,2*n){
            p.push_back(jam[i]);
        }
        reverse(all(p));
        int sol=2*n;
        int res=0;
        map<int,int>mup;
        rep(i,0,p.size()-1){
                if(p[i]==2)
                    res++;
                else res--;
                mup[res]=i+1;
                if(res==0){
                    sol=min(sol,2*n-i-1);
                }
            }
            int ind=0;
           rep(i,0,v.size()-1){
            if(v[i]==1){
                ind++;
            }
            else ind--;
            if(mup[ind]!=0){
                    int lol=mup[ind];
                int res=0;
                res=n-i-1+(n-lol);
                sol=min(sol,res);
            }
                 if(ind==0){
                    sol=min(sol,2*n-i-1);
                }
           }
           if(res==0 or ind==0){
                sol=min(sol,n);
           }
           cout<<sol<<endl;
    }




return 0;
}




