

// </> : towhid1zaman

//#pragma GCC optimize("Ofast,no-stack-protector,unroll-loops,fast-math,O3")
//#pragma GCC target("avx,avx2,fma") 
#pragma comment (linker,"/STACK:16777216")
#include "bits/stdc++.h"
using namespace std;

typedef long long ll;
typedef vector<int> vi;
typedef vector<ll> vll;
typedef pair<int, int> pii;
typedef pair<ll, ll> pll;
typedef vector<pii> vpii;
typedef vector<pll> vpll;

#define endl "\n"
#define sqr(a) ((a)*(a))
#define sz(x) ((int)(x).size())
#define ff first
#define ss second
#define pb push_back
#define eb emplace_back
#define deb(x) cout<<#x <<"="<<x<<endl;
#define present(v,x) ((v).find(x)!=(v).end())
#define _ ios::sync_with_stdio(0);cin.tie(0);
#define sp(k) cout<<setprecision(k)<<fixed;
#define fill(a,b) memset(a,b,sizeof(a))
#define all(v) (v).begin(),(v).end()

#define rep(i,a) for(int i=0;i<a;i++)
#define rep1(i,a,b) for(int i=(a);i<=(b);++i)
#define irep(i,b,a) for(int i=(b);i>=(a);--i)

#define minv(v) *min_element(all(v))
#define maxv(v) *max_element(all(v))
#define unq(v) sort(all(v)),(v).erase(unique(all(v)),(v).end())
#define yn(k) if(k)puts("YES");else puts("NO");

vi mods = {1000000007, 1000000009, 998244353};
const double pi = acos(-1.0);
const int inf = 0x3f3f3f3f;// (int)3e18;
const int maxn = 200005;
const int mod = mods[0];

/*1.taxi : six identical digtis ->22-22-22
 *2.pizza : decreasing order number->98-76-54
 *3.girls : other
 */


vi taxi(222,0), pizza(222,0), girls(222,0);
string name[222];

void Taxi(){
    cout << "If you want to call a taxi, you should call: ";
}
void Pizza(){
    cout << "If you want to order a pizza, you should call: ";
}
void Girls(){
    cout << "If you want to go to a cafe with a wonderful girl, you should call: ";
}

int type(string s){
    if(s[0] == s[1] and s[1] == s[3] and s[3] == s[4] and s[4]==s[6] and s[6]==s[7]){
        //taxi
        return 1;
    }
    if(s[0] > s[1] and s[1] > s[3] and s[3] > s[4] and s[4] > s[6] and s[6] > s[7]){
        // pizza
        return 2;
    }
    return 3;

}
void task(){
        int n; cin >> n;
        int t = 0, p = 0, g = 0;
        for(int i = 1; i<=n; i++){
            int k;
            cin >> k >> name[i];
            for(int j = 1; j<=k; j++){
                string s; cin >> s;
                int typ = type(s);
                if(typ == 1)taxi[i]++;
                else if(typ == 2)pizza[i]++;
                else girls[i]++;
                t = max(t, taxi[i]), p = max(p, pizza[i]), g = max(g, girls[i]);
            }
        }

        Taxi(); int cnt = 0;
        for(int i = 1; i <= n; i++){
            if(taxi[i] == t){
                if(cnt > 0){
                    cout <<", ";
                }
                cout << name[i];
                cnt++;
            }
        }
        cout <<"."<<endl;

        Pizza(); cnt = 0;
        for(int i = 1; i<=n; i++){
            if(pizza[i] == p){
                if(cnt >0){
                    cout << ", ";
                }
                cout << name[i];
                cnt++;
            }
        }
        cout <<"."<<endl;

        Girls(); cnt = 0;
        for(int i = 1; i<=n; i++){
            if(girls[i] == g){
                if(cnt > 0){
                    cout << ", ";
                }
                cout << name[i];
                cnt++;
            }
        }
        cout <<"."<<endl;

}

int main(){
        _
#ifdef OJ
        freopen("input.txt", "r", stdin);
        freopen("output.txt", "w", stdout);
#endif

        int T = 1; //cin >> T;
        for(int __ = 1; __ <= T; __++){
            //cout <<"Case "<<__<<": ";
            task();
        }


/*array size ?
 *n==1 ?
 *different approach ?
*/        
return 0;
}