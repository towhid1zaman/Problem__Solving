
// </> : towhid1zaman

#include "bits/stdc++.h"
using namespace std;
typedef long long ll;
typedef vector<int> vi;typedef vector<ll> vll;
#define fill(a,b) memset(a, b, sizeof (a))
#define all(v) (v).begin(),(v).end()
#define sp(k) cout<<setprecision(k)<<fixed;
#define rep(i,a) for(int i=0; i<a;i++)
#define rep1(i,a,b) for(int i=(a);i<=(b);++i)
#define irep(i,b,a) for(int i=(b);i>=(a);--i)
#define minv(v) *min_element(all(v))
#define maxv(v) *max_element(all(v))
#define unq(v) sort(all(v)),(v).erase(unique(all(v)),(v).end())
#define _ios ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define endl "\n"
#define sqr(a) ((a)*(a))
#define sz(a) int(a.size())
#define ff first
#define ss second
#define pb push_back

const double pi = acos(-1.0);
const int mod = 1000000007; // (int)1e9+7
const int maxn = 2000100;

int main(){
        _ios;

        int k; cin >> k;
        string s; cin >> s;
        set<char>C;
        for(auto c: s){
            C.insert(c);
        }
        if(k>sz(s) or sz(C)<k){
            cout<<"NO"<<endl;
            return 0;
        }
        cout<<"YES"<<endl;
        if(k==1){
            cout<<s<<endl;
            return 0;
        }
        int cnt = 1;
        char x = s[0];
        cout<<x;
        set<char>SET;
        SET.insert(x);
        for(int i  = 1; i<sz(s); i++){
            if(s[i]!= x and SET.find(s[i])==SET.end() and cnt<k){
                x = s[i];
                SET.insert(x);
                cout<<endl;
                cnt++;
            }
            cout<<s[i];
        }
        cout<<endl;



return 0;
}

