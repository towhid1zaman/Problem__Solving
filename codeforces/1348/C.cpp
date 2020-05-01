
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

        int T; cin >> T;
        while(T--){
            ll n,k; cin >> n >> k;
            string s; cin >> s;
            sort(all(s));
            if(k==1){
                cout<<s<<endl;
                continue;
            }
            if(s[k-1] != s[0]){
                cout<<s[k-1]<<endl;
                continue;
            }
            ll cnt[30];
            fill(cnt,0);
            rep(i,n){
                cnt[s[i]-'a']++;
            }
            int dif = 0;
            rep(i,26){
                if(cnt[i]>0)dif++;
            }
            if(dif>=3){
                string ans = s.substr(k-1,n-k+1);
                cout<<ans<<endl;
                continue;
            }
            if(dif==1){
                for(int i = 0; i<n/k+!!(n%k);i++){
                    cout<<s[0];
                }
                cout<<endl;
                continue;
            }
            else{

                    if(cnt[s[0]-'a'] > k){
                        string ans = s.substr(k-1,n-k+1);
                        cout<<ans<<endl;
                        continue;
                    }
                    else{
                        cout<<s[0];
                        for(int i=0;i<cnt[s[k]-'a']/k;i++){
                            cout<<s[k];
                        }
                        if(cnt[s[k]-'a']%k > 0){
                                cout<<s[k];
                        }
                        cout<<endl;
                        continue;
                    }

            }
        }


return 0;
}

