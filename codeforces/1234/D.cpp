#include "bits/stdc++.h"
using namespace std;
typedef long long ll;
typedef vector<int> vi;
typedef vector<ll> vll;
typedef pair <int, int> pii;
typedef vector<pii>vip;
#define all(v) (v).begin(),(v).end()
#define sp(x,k) cout<<setprecision(k)<<fixed<<x<<endl;
#define rep(i,a,b) for(int i =(a); i <=(b); ++i)
#define minv(v) *min_element(v.begin(),v.end())
#define maxv(v) *max_element(v.begin(),v.end())
#define each(it,s) for(auto it = s.begin(); it != s.end(); ++it)
#define unq(v) sort(all(v)),(v).erase(unique((v).begin(),(v).end()),(v).end())
#define endl "\n"
#define F first
#define S second
#define pb push_back
#define mp make_pair
const int mod = 1000000007; // (int)1e9+7
const int N = int(2e5) + 99;
string s;
int q;
set<int>check[26];
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    cerr.tie(nullptr);
    cin>>s>>q;
    for(int i = 0; i<s.size();i++){
        check[s[i]-'a'].insert(i);
    }
    while(q--){
            int type;
            cin>>type;
        if(type==1){
            int pos;
            char c;
            cin>>pos>>c;
            pos--;
            check[s[pos]-'a'].erase(pos);
            s[pos] = c;
            check[s[pos]-'a'].insert(pos);
        }
        else {
            int l,r;
            cin>>l>>r;
            l--,r--;
            int ans = 0;
            for(int i = 0; i<26;i++){
                auto d = check[i].lower_bound(l);
                if(d!=check[i].end() and *d<=r){
                    ans++;
                }
            }
            cout<<ans<<endl;
        }
    }
return 0;
}



