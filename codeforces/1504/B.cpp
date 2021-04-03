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
const int maxn = 200005;
const int mod = 1000000007;
void yes(string s, string t){
    cout << "YES" << endl;
    cout << s <<' '<<t<< endl;
}
void task(){
    int n; cin >> n;
    string a; cin >> a;
    string b; cin >> b;
    bool ok = 1, ko = 0;
    int one = count(all(a), '1'), zero = count(all(a), '0');
    for(int i = n-1; i>=0; i--){
        char now = a[i];
        if(ko){
            now = '0'+'1'-a[i];
        }
        if(now!=b[i]){
            if(one == zero)ko = !ko;
            else ok = 0;
        }
        if(!ko){
            if(a[i]=='1')one--;
            if(a[i]=='0')zero--;
        }
        else{
            if(a[i]=='1')zero--;
            if(a[i]=='0')one--;           
        }
    }
    cout << (ok? "YES" : "NO") << endl;
}

int main(){
    ios_base :: sync_with_stdio(0); cin.tie(0); cout.tie(0);
#ifdef _Local
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif

    int T = 1; cin >> T;
    for(int __ = 1; __ <= T; __++){
        //cout <<"Case "<<__<<": ";
        task();
    }
      
return 0;
}