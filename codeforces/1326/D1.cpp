
// </> : towhid1zaman

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
#define sqr(a) ((a)*(a))
#define sz(a) int(a.size())
#define ff first
#define ss second
#define pb push_back

const int INF = 1e9 + 10;
const double pi = acos(-1.0);
const int mod = 1000000007; // (int)1e9+7
const int maxn = 2000100;
bool ispalin(string s){
    string t = s;
    reverse(all(t));
    return (t==s);
}
int main(){
        _ios;

        int T; cin >> T;
        while(T--){
            string s; cin >> s;
            int l = 0;
            int r = sz(s) - 1;
            int res = 0;
            string a,b,c;
            while(l<r){
                if(s[l]==s[r]){
                    a+=s[l];
                    b+=s[r];
                    l++;
                    r--;
                }
                else break;
            }
            //cout<<a<<" "<<b<<endl;
            //cout<<l<<" "<<r<<endl;
            string chek = s.substr(l,r-l+1);
            rep(i,sz(chek)){
                string d = chek.substr(0,i+1);
                string e = chek.substr(i,sz(s)-i);
                if(ispalin(d)){
                    //cout<<"hoiche"<<endl;
                    if(res<sz(d)){
                        res = sz(d);
                        c = d;
                    }
                }
                if(ispalin(e)){
                    if(res<sz(e)){
                        res = sz(e);
                        c = e;
                    }
                }
            }
            reverse(all(b));
            //reverse(all(c));
            string ans = a+c+b;
            cout<<ans<<endl;

        }


return 0;
}






