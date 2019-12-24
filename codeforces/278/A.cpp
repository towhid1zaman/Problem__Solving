#include "bits/stdc++.h"
using namespace std;
typedef long long ll;
typedef unsigned long long ull;
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

int dx4[] = {0,0,1,-1};
int dy4[] = {1,-1,0,0};
int dx8[] = {0,0,1,1,1,-1,-1,-1};
int dy8[] = {1,-1,1,-1,0,0,-1,1};

const double pi = acos(-1.0);
const int mod = 1000000007; // (int)1e9+7
const int maxn = 200100;
int v[maxn];
int main(){
        _ios;

        int n;
        cin>>n;
        fill(v);
        for(int i = 1 ; i<=n;i++){
            cin>>v[i];
        }
        int s,t;
        cin>>s>>t;
        if(s==t){
            cout<<0<<endl;
            return 0;
        }
        int s1 = 0;
        int s2 = 0;
        if(s>t){
            swap(s,t);
        }
        for(int i = s; i<t;i++){
            s1+=v[i];
        }
         if(t==n and s==1){
                s2+=v[t];
                cout<<min(s1,s2)<<endl;
                return 0;
            }
        while(true){
            if(t>n and s==1)break;
            if(t>n){
                t = 1;
            }

            if(t==s-1){
                s2+=v[t];
                break;
            }
            s2+=v[t];
            t++;
        }
        //cout<<s1<<' '<<s2<<endl;
        cout<<min(s1,s2)<<endl;

return 0;
}




