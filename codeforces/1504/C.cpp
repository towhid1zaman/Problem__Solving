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
    cout << s <<endl<<t<< endl;
}
void task(){
    int n; cin >> n;
    string s; cin >> s;
    vi Equ, notEqu;
    bool chek = s.back() =='0' or s[0] == '0';
    rep(i, n){
        if(s[i]=='1')Equ.push_back(i);
        else notEqu.push_back(i);
    }
    string a = s, b = s;  
    if(chek or notEqu.size()%2==1){
        cout << "NO" << endl;
        return;
    }

    bool ok = 1;
    for(int pos : notEqu){
        if(ok)a[pos] = ')', b[pos] = '(';
        else a[pos] = '(', b[pos] = ')';
        ok = !ok;
    }
    int l = 0, r = Equ.size()-1;
    for(;l<r;){
        int left = Equ[l], right = Equ[r];
        a[left] = '(';
        b[left] = '(';
        a[right] = ')';
        b[right] = ')';
        l++;
        r--;
    }
    yes(a, b);
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