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
#define ff first
#define ss second
#define pb push_back
#define sz(x) (int)x.size()

const double pi = acos(-1.0);
const int mod = 1000000007; // (int)1e9+7
const int maxn = 100005;

vector<int>sequ[maxn];
int main(){
        _ios;
        int n;cin >> n;
        rep(i,n){
            int x;cin>>x;
            sequ[x].pb(i);
        }
        /*
         sequence of numbers is called an Arithmetic progression if the 
         difference between any two consecutive terms is always the same.
         */
        vector<pair<int,int> >ans;
        rep(i,maxn){
            if(sequ[i].size()==0)continue;
            else if(sequ[i].size()==1) ans.pb({i,0});
            else if(sequ[i].size()==2){
                int res = sequ[i][1] - sequ[i][0];
                ans.pb({i,res});
            }
            else{
                bool f = true;
                for(int j = 1; j<sequ[i].size()-1;j++){
                        int chek1 = sequ[i][j] - sequ[i][j-1];
                        int chek2 = sequ[i][j+1] - sequ[i][j];
                        if(chek1!=chek2) f = false;
                }
                if(f){
                    ans.pb({i,sequ[i][1] - sequ[i][0]});
                }
            }
        }
        cout<<ans.size()<<endl;
        for(int i = 0; i<ans.size();i++){
            cout<<ans[i].ff<<" "<<ans[i].ss<<endl;
        }





return 0;
}





