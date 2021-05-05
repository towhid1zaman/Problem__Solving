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
int charToint(char c){
  if(c<='9' and c>='0')return c - '0';
  else return c - 'A' + 10;
}
ll convertToDecimal(string s, int base){
    int n = s.size();
    ll number = 0;
    for(int i = 0; i<n; i++){
      number = number * base + charToint(s[i]);
    }
    return number;
}

void task(){
    int n; cin >> n;
    if(n <= 9){
      cout << n << endl;
      return;
    }

    int ans = 0;
    for(int i =1; i<=9; i++){
      ll d = i;
      while(d<=n){
        d =d*10+i;
        ans++;
      }
    }
    cout <<ans<<endl;
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