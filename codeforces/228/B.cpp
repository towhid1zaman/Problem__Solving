

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

/*
 *
 */

void task(){
        int Na, Ma; cin >> Na >> Ma;
        int A[Na][Ma];

        for(int i = 0; i<Na; i++){
            string s; cin >> s;
            for(int j = 0; j<Ma; j++){
                A[i][j] = s[j]-'0';
            }
        }

        int Nb, Mb; cin >> Nb >> Mb;
        int B[Nb][Mb];
        for(int i = 0; i<Nb; i++){
            string s; cin >> s;

            for(int j = 0; j<Mb; j++){
                B[i][j] = s[j] - '0';
            }
        }

        int x = 0, y = 0, mx = 0;

        for(int p = -50; p<=50; p++){
            for(int q = -50; q<=50; q++){
                int temp = 0;
                for(int i = 0; i<Na; i++){
                    for(int j = 0; j<Ma; j++){
                        if(i+p >=0 and i+p < Nb and j+q>=0 and j+q<Mb){
                            temp+=A[i][j] * B[i+p][j+q];
                        }
                    }
                }

                if(temp > mx){
                    x = p, y = q;
                    mx = temp;
                }
            }
        }


        cout << x <<' '<<y << endl;


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