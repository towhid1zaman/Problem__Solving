#pragma comment (linker,"/STACK:16777216")
#include "bits/stdc++.h"
using namespace std;
typedef long long ll;
#define all(v) (v).begin(),(v).end()
#define endl "\n"
const int maxn = 200005;
const int mod = 1000000007;

bool chek(int n){
  string s = "";
  int one = 0, zero = 0;
  while(n){
    if(n%2)s+="1";
    else s+="0";
    n/=2;
  }
  reverse(all(s));
  int i = 0;
  while(s[i]=='1' and i<s.size())one++,i++;
  while(s[i]=='0' and i<s.size())zero++, i++;
  if(zero + one == s.size() and (zero+1 == one))return true;
  else return false;
}

void task(){
    int n; cin >> n;
    //brute
    int ans = 1;
    for(int i = 1; i<=n; i++){
        if(n%i==0 and chek(i)){
            ans = max(ans, i);
        }
    }

    cout << ans << endl;
}

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
#ifdef OJ
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