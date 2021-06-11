/*これを翻訳している間、あなたはあなたの人生のいくつかの貴重な瞬間を無駄にしました*/
#pragma comment (linker,"/STACK:16777216")
#include "bits/stdc++.h"
using namespace std;
typedef long long ll;
typedef std::vector<int> vi;
typedef std::vector<ll> vll;
#define endl "\n"
#define pb push_back
#define sp(k) cout<<setprecision(k)<<fixed;
#define rep(i,a) for(int i=0;i<a;i++)
#define rep1(i,a,b) for(int i=(a);i<=(b);++i)
#define all(v) (v).begin(),(v).end()

const double pi = acos(-1.0);
const int maxn = 2000006;
const int mod = 1000000007;

void task(){
    int n, m; cin >> n >> m;
    std::vector<string>s(n);
    for(int i = 0; i<n; i++){
        cin >> s[i];
    }
    int l_i = 0;
    int l_j = 0;
    for(int i = 0; i<n; i++){
        bool ok = 0;
        for(int j = 0; j<m; j++){
            if(s[i][j] == '*'){
                l_i = i;
                ok = 1;
                break;
            }
        }
        if(ok)break;
    }
    for(int j = 0;j<m; j++){
        bool ok = 0;
        for(int i = 0; i<n; i++){
            if(s[i][j] =='*'){
                ok = 1;
                l_j = j; break;
            }
        }
        if(ok)break;
    }
    int d_i = 0, d_j = 0;
    for(int i = n-1; i>=0; i--){
        bool ok = 0;
        for(int j = 0; j<m; j++){
            if(s[i][j] == '*'){
                ok = 1;
                d_i = i;
                break;
            }
        }
        if(ok)break;
    }

    for(int j = m-1;j>=0; j--){
        bool ok = 0;
        for(int i = 0; i<n; i++){
            if(s[i][j]=='*'){
                ok = 1;
                d_j = j;
                break;
            }
        }
        if(ok)break;
    }

    for(int i = l_i; i<=d_i; i++){
        for(int j = l_j; j<=d_j; j++){
            cout << s[i][j];
        }
        cout << endl;
    }
}

int main(){
    ios_base :: sync_with_stdio(0); cin.tie(0); cout.tie(0);
#ifdef _Local
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif

    int T = 1; //cin >> T;
    for(int __ = 1; __ <= T; __++){
        //cout <<"Case "<<__<<": ";
        task();
    }
      
return 0;
}