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
const int maxn = 200005;
const int mod = 1000000007;

void task(){
    string a, b; cin >> a >> b;
    int ans = max( abs( (int)a[0] - (int)b[0] ), abs( (int)a[1] - (int)b[1] ) );
    cout << ans << endl;
    while(a!=b){
        if(a[0] > b[0]){
            a[0]--;
            cout << 'L';
        }
        else if(a[0] < b[0]){
            a[0]++;
            cout << 'R';
        }
        if(a[1] > b[1]){
            a[1]--;
            cout << 'D';
        }
        else if(a[1] < b[1]){
            a[1]++;
            cout << 'U';
        }
        cout << endl;
    }    
    cout << endl;
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