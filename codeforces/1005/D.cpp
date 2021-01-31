#pragma comment (linker,"/STACK:16777216")
#include "bits/stdc++.h"
using namespace std;
typedef long long ll;
#define all(v) (v).begin(),(v).end()
#define endl "\n"
const int maxn = 200005;
const int mod = 1000000007;

void task(){
    string s; cin >> s;
    std::vector<int>a;
    for(int i = 0; i<s.size(); i++){
        a.push_back(s[i]-'0');
    }
    int ans = 0;
    for(int i = 0; i<a.size();){
        std::vector<bool>vis(3, false);
        vis[0] = true;
        int sum = 0;
        for(int j = i; j<a.size(); j++){
            sum+=a[j];
            sum%=3;
            if(vis[sum]){
                ans++;
                i = j+1;
                break;
            }
            vis[sum] = true;
            if(j==a.size()-1)i = a.size();
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